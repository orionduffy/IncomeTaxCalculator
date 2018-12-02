#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static void UpdateProgTax(int);
    static void UpdateFica(int);
    static void UpdateStateTax(int);
    static void UpdateNetIncome(int);

private slots:
    void on_Calculate_clicked();
    void on_Income_returnPressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
