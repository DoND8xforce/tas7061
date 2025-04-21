#include "wgContentFsv3044.h"
#include "ui_wgContentFsv3044.h"

wgContentFsv3044::wgContentFsv3044(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentFsv3044)
    , mWgFreqSpanShow(true)
    , mWgRefLevelShow(true)
    , mWgAdvShow(true)
    , mWgTriggerShow(true)
{
    ui->setupUi(this);
}

wgContentFsv3044::~wgContentFsv3044()
{
    delete ui;
}

void wgContentFsv3044::on_btnFreqSpan_clicked()
{
    mWgFreqSpanShow ^= true;
    ui->wgFreqSpan->setVisible(mWgFreqSpanShow);
}


void wgContentFsv3044::on_btnRefLevel_clicked()
{
    mWgRefLevelShow ^= true;
    ui->wgRefLevel->setVisible(mWgRefLevelShow);
}

void wgContentFsv3044::on_btnTrigger_clicked()
{
    mWgTriggerShow ^= true;
    ui->wgTrigger->setVisible(mWgTriggerShow);
}


void wgContentFsv3044::on_btnAdv_clicked()
{
    mWgAdvShow ^= true;
    ui->wgAdv->setVisible(mWgAdvShow);
}
