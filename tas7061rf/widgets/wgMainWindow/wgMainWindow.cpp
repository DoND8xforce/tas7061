#include "wgMainWindow.h"
#include "ui_wgMainWindow.h"
#include "wgContentFsv3044.h"
#include "wgContentNrx.h"
#include "wgContentOsp230.h"
#include "wgContentSma100B.h"

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
    mScrollArea->setWidget(new wgContentSma100B(mScrollArea));

    layout->addWidget(mScrollArea);

    QPixmap pixmap(":/icon/SMA100B.png");
    ui->lblImage->setPixmap(pixmap);
}

void wgMainWindow::on_btnSma100B_clicked()
{
    mScrollArea->setWidget(new wgContentSma100B(mScrollArea));
    QPixmap pixmap(":/icon/SMA100B.png");
    ui->lblImage->setPixmap(pixmap);
}


void wgMainWindow::on_btnFsv3044_clicked()
{
    mScrollArea->setWidget(new wgContentFsv3044(mScrollArea));
    QPixmap pixmap(":/icon/FSV3004.png");
    ui->lblImage->setPixmap(pixmap);
}


void wgMainWindow::on_btnNrx_clicked()
{
    mScrollArea->setWidget(new wgContentNrx(mScrollArea));
    QPixmap pixmap(":/icon/NRX.png");
    ui->lblImage->setPixmap(pixmap);
}


void wgMainWindow::on_btnOsp230_clicked()
{
    mScrollArea->setWidget(new wgContentOsp230(mScrollArea));
    QPixmap pixmap(":/icon/OSP230.png");
    ui->lblImage->setPixmap(pixmap);
}

