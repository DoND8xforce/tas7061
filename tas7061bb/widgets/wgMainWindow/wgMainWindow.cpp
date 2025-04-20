#include "wgMainWindow.h"
#include "ui_wgMainWindow.h"

#include <QVBoxLayout>

wgMainWindow::wgMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::wgMainWindow)
    , mWgRtm(nullptr)
{
    ui->setupUi(this);
}

wgMainWindow::~wgMainWindow()
{
    delete ui;
}

void wgMainWindow::initialize()
{
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setSpacing(0);
    layout->setContentsMargins(0, 0, 0, 0);

    mWgRtm = new wgContentRtm3004();
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setWidget(mWgRtm);



    // ui->wgContents->setLayout(layout);

    // mWgRtm = new wgContentRtm3004();
    // mWgRtm->setVisible(true);
    // mWgRtm->show();
    // layout->addWidget(mWgRtm);
}


