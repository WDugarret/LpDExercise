#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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


void MainWindow::on_m_SortListButton_pressed()
{

}

////////////////////////////////
/// \brief Slot to clearthe input list
///
void MainWindow::on_m_ClearInputListButton_pressed()
{
    //clear the input list
    ui->m_InputListWidget->clear();
}

