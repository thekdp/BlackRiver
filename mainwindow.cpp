#include "mainwindow.h"

MainWindow::MainWindow(QMainWindow *parent)
    : QMainWindow(parent)
{   

    splitter = new QSplitter();
    setCentralWidget(splitter);

    leftBox = new QGroupBox(splitter);
    centralBox = new QGroupBox(splitter);
    rightBox = new QGroupBox(splitter);

    splitter->setStretchFactor(0, 0);
    splitter->setStretchFactor(1, 1);
    splitter->setStretchFactor(2, 0);


    createMenus();
    setupLeftBox();
    setupCentralBox();
    setupRightBox();
}

void MainWindow::createMenus()
{
    QMenuBar *menuBar = new QMenuBar();
    this->setMenuBar(menuBar);

    QMenu *statusMenu = new QMenu;
    QMenu *optionsMenu = new QMenu;
    QMenu *helpMenu = new QMenu;

    statusMenu->setTitle(tr("Status"));
    optionsMenu->setTitle(tr("Options"));
    helpMenu->setTitle(tr("Help"));

    menuBar->addMenu(statusMenu);
    menuBar->addMenu(optionsMenu);
    menuBar->addMenu(helpMenu);
}

void MainWindow::setupLeftBox()
{
    QVBoxLayout *vbox = new QVBoxLayout(leftBox);
    QHBoxLayout *hbox = new QHBoxLayout;

    lbl_friends = new QLabel(tr("Friends"));
    lw_friends = new QListWidget;
    pb_forceUpdate = new QPushButton(tr("Update"));
    pb_forcePing = new QPushButton(tr("Ping users"));

    vbox->addWidget(lbl_friends, 0, Qt::AlignHCenter);
    vbox->addWidget(lw_friends);
    vbox->addLayout(hbox, 0);
    hbox->addWidget(pb_forceUpdate);
    hbox->addWidget(pb_forcePing);
}

void MainWindow::setupCentralBox()
{
    QVBoxLayout *vbox = new QVBoxLayout(centralBox);

    lbl_main = new QLabel(tr("Welcome to %1, ver. %2.%3").arg(APP_NAME).arg(APP_MAJOR_VERSION).arg(APP_MINOR_VERSION));
    lbl_main->setStyleSheet("font-size: 40pt");

    vbox->addWidget(lbl_main, 0, Qt::AlignHCenter);
}

void MainWindow::setupRightBox()
{

}

MainWindow::~MainWindow()
{
}

