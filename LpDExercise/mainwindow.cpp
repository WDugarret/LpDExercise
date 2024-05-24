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
    ui->m_SortedListWidget->clear();

    //Let's copy input list to keep it if necessary in a later time
    for(int idx=0;idx<ui->m_InputListWidget->count();idx++)
    {
        //get an item  from the input list
        QListWidgetItem* item = ui->m_InputListWidget->item(idx);

        //copy to the sorted list first
        ui->m_SortedListWidget->addItem(item->text());

    }

    this->doSortList(ui->m_SortedListWidget,m_bAscendOrder);
}

////////////////////////////////
/// \brief Slot to clear the input list
///
void MainWindow::on_m_ClearInputListButton_pressed()
{
    //clear the input list
    ui->m_InputListWidget->clear();
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
