#include "wgMainWindow.h"
#include "ui_wgMainWindow.h"
#include "wgContentRtm3004.h"
#include "wgContentFpl1003.h"
#include "wgContentHmf2550.h"

#include <QVBoxLayout>

wgMainWindow::wgMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::wgMainWindow)
{
    ui->setupUi(this);

    initialize();
}

wgMainWindow::~wgMainWindow()
{
    delete ui;
}

void wgMainWindow::initialize()
{
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setSpacing(0);
    layout->setContentsMargins(12, 0, 0, 0);
    ui->wgContent->setLayout(layout);

    mScrollArea = new QScrollArea();
    mScrollArea->setWidgetResizable(true);
    mScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    mScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    mScrollArea->setWidget(new wgContentRtm3004(mScrollArea));

    layout->addWidget(mScrollArea);

    QPixmap pixmap(":/icon/RTM3004.png");
    ui->lblImage->setPixmap(pixmap);
}

void wgMainWindow::on_btnRmt3004_clicked()
{
    mScrollArea->setWidget(new wgContentRtm3004(mScrollArea));
    QPixmap pixmap(":/icon/RTM3004.png");
    ui->lblImage->setPixmap(pixmap);
}

void wgMainWindow::on_btnFpl1003_clicked()
{
    mScrollArea->setWidget(new wgContentFpl1003(mScrollArea));
    QPixmap pixmap(":/icon/FPL1003.png");
    ui->lblImage->setPixmap(pixmap);
}

void wgMainWindow::on_btnHmf2550_clicked()
{
    mScrollArea->setWidget(new wgContentHmf2550(mScrollArea));
    QPixmap pixmap(":/icon/HMF2550.png");
    ui->lblImage->setPixmap(pixmap);
}
