#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_bAscendOrder(true)
    , m_bKeepOnlyOnce(false)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

////////////////////////////////
/// \brief Slot to add a text in the input list
///
void MainWindow::on_m_AddInListButton_pressed()
{
    //Add the text in the input list
    ui->m_InputListWidget->addItem(ui->m_UserInEditText->toPlainText());

    //clear the text edit for next input
    ui->m_UserInEditText->clear();

}

////////////////////////////////
/// \brief Slot to sort the list
///
void MainWindow::on_m_SortListButton_pressed()
{
    //initialize the sorted list
    this->doClearList(ui->m_SortedListWidget);

    //Let's copy input list to keep it if necessary in a later time
    //First case => keep only one occurence
    if(true == m_bKeepOnlyOnce)
    {
        this->doCopyOnlyOnceInList(ui->m_InputListWidget,ui->m_SortedListWidget);
    }
    //Second case => keep any item
    else
    {
        this->doCopyList(ui->m_InputListWidget,ui->m_SortedListWidget);
    }

    //Sort the list
    this->doSortList(ui->m_SortedListWidget,m_bAscendOrder);
}

////////////////////////////////
/// \brief Slot to clear lists
///
void MainWindow::on_m_ClearListButton_pressed()
{
    //clear the input list
    this->doClearList(ui->m_InputListWidget);

    //clear the sorted list
    this->doClearList(ui->m_SortedListWidget);
}

///////////////////////
/// \brief Manage Ascending or Descending Order
///
void MainWindow::on_m_AscRadioButton_clicked()
{
    m_bAscendOrder = true;
}

void MainWindow::on_m_DescRadioButton_clicked()
{
    m_bAscendOrder = false;
}

///////////////////////
/// \brief Select if it need to remove same words
/// \param arg1
///
void MainWindow::on_m_KeepOnlyOncecheckBox_stateChanged(int arg1)
{
    //when value is 0 then do not keep only once
    if(0U == arg1)
    {
        m_bKeepOnlyOnce = false;
    }
    //otherwise clean multiple occurences
    else
    {
        m_bKeepOnlyOnce = true;
    }
}

/////////////////////////////////
/// \brief Copy the input list into the output one
/// \param List to be copied
/// \param new list
///
void MainWindow::doCopyList(const QListWidget* const p_pInputList, QListWidget* const p_pOutputList)
{
    //Copy items from in to out list
    for(int idx=0;idx<p_pInputList->count();idx++)
    {
        //get an item  from the input list
        QListWidgetItem* item = p_pInputList->item(idx);

        //copy to the output list
        p_pOutputList->addItem(item->text());

    }
}

/////////////////////////////////
/// \brief Action to remove multiple occurence
/// \param list to be analyse
///
void MainWindow::doCopyOnlyOnceInList(const QListWidget* const p_pInputList, QListWidget* const p_pOutputList)
{
    //Copy items from in to out list
    for(int idx=0;idx<p_pInputList->count();idx++)
    {
        //get an item from the list
        QListWidgetItem* item = p_pInputList->item(idx);

        //always copy first item
        if(0U == idx)
        {
            //copy to the sorted list
            p_pOutputList->addItem(item->text());
        }
        else
        {
            //Let's find an occurence of the current item
            QList<QListWidgetItem*> l_FoundInList =p_pOutputList->findItems(item->text(),Qt::MatchExactly);

            //if received list is not empty then an occurence is already in the list => do nothing
            //but if list is empty then add this new item
            if(true == l_FoundInList.empty())
            {
                //copy to the sorted list
                p_pOutputList->addItem(item->text());
            }

        }
    }
}

/////////////////////////
/// \brief Clear the list provided in param
/// \param p_pList
///
void MainWindow::doClearList(QListWidget* const p_pList)
{
    p_pList->clear();
}

/////////////////////////////////
/// \brief Action to Sort the list Based on Qt API
/// \param list to be sorted
/// \param Ascending or Descending Order
///
void MainWindow::doSortList(QListWidget* const p_pList, const bool b_AscOrder)
{
    //Sorting is request to be ascending
    if(true == b_AscOrder)
    {
        p_pList->sortItems(Qt::AscendingOrder);
    }
    //Sorting is request to be descending
    else
    {
        p_pList->sortItems(Qt::DescendingOrder);
    }
}


