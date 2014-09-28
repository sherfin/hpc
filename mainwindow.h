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
    explicit MainWindow(QWidget *parent = 0);


    ~MainWindow();

public slots:

    void Play();

private slots:
    void on_pushButton_clicked();

signals:

    void playClicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
