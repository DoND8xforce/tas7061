#include "wgContentRtm3004.h"
#include "ui_wgContentRtm3004.h"

wgContentRtm3004::wgContentRtm3004(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentRtm3004)
    , mWgTriggerShow(true)
    , mWgLevelShow(true)
    , mWgScaleShow(true)
{
    ui->setupUi(this);
}

wgContentRtm3004::~wgContentRtm3004()
{
    delete ui;
}

void wgContentRtm3004::on_btnTrigger_clicked()
{
    mWgTriggerShow ^= true;
    ui->wgTrigger->setVisible(mWgTriggerShow);
}


void wgContentRtm3004::on_btnLevel_clicked()
{
    mWgLevelShow ^= true;
    ui->wglevel->setVisible(mWgLevelShow);
}


void wgContentRtm3004::on_btnScale_clicked()
{
    mWgScaleShow ^= true;
    ui->wgScale->setVisible(mWgScaleShow);
}

