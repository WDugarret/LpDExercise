#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_m_AddInListButton_pressed();

    void on_m_SortListButton_pressed();

    void on_m_ClearInputListButton_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
