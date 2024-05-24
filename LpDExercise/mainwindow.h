#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void doSortList(QListWidget* const p_pList, const bool b_AscOrder);

private slots:
    void on_m_AddInListButton_pressed();

    void on_m_SortListButton_pressed();

    void on_m_ClearInputListButton_pressed();

    void on_m_AscRadioButton_clicked();

    void on_m_DescRadioButton_clicked();

private:
    Ui::MainWindow *ui;

    bool m_bAscendOrder;
};
#endif // MAINWINDOW_H
