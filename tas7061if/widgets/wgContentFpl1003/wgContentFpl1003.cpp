#include "wgContentFpl1003.h"
#include "ui_wgContentFpl1003.h"

wgContentFpl1003::wgContentFpl1003(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentFpl1003)
    , mWgFreqSpanShow(true)
    , mWgRefLevelShow(true)
    , mWgAdvShow(true)
    , mWgTriggerShow(true)
{
    ui->setupUi(this);
}

wgContentFpl1003::~wgContentFpl1003()
{
    delete ui;
}

void wgContentFpl1003::on_btnFreqSpan_clicked()
{
    mWgFreqSpanShow ^= true;
    ui->wgFreqSpan->setVisible(mWgFreqSpanShow);
}


void wgContentFpl1003::on_btnRefLevel_clicked()
{
    mWgRefLevelShow ^= true;
    ui->wgRefLevel->setVisible(mWgRefLevelShow);
}

void wgContentFpl1003::on_btnTrigger_clicked()
{
    mWgTriggerShow ^= true;
    ui->wgTrigger->setVisible(mWgTriggerShow);
}


void wgContentFpl1003::on_btnAdv_clicked()
{
    mWgAdvShow ^= true;
    ui->wgAdv->setVisible(mWgAdvShow);
}

