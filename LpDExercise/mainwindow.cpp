#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_bAscendOrder(true)
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
    this->doCopyList(ui->m_InputListWidget,ui->m_SortedListWidget);

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

        //copy to the sorted list first
        p_pOutputList->addItem(item->text());

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


