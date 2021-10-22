#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <config.h>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QMainWindow *parent = nullptr);
    ~MainWindow();
private:
    QSplitter *splitter;

    QGroupBox *leftBox;
    QGroupBox *centralBox;
    QGroupBox *rightBox;

    QListWidget *lw_friends;
    QPushButton *pb_forceUpdate;
    QPushButton *pb_forcePing;
    QLabel *lbl_friends;
    QLabel *lbl_main;

    void createMenus();
    void setupLeftBox();
    void setupCentralBox();
    void setupRightBox();
};
#endif // MAINWINDOW_H
