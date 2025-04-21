#include "wgContentSma100B.h"
#include "ui_wgContentSma100B.h"

wgContentSma100B::wgContentSma100B(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentSma100B)
    , mWgRfFreqShow(true)
    , mWgPulseModShow(true)
    , mWgRfLevelShow(true)
    , mWgAdvPulseModShow(true)
    , mWgAdvRfShow(true)
    , mWgAdvRfLevelShow(true)
{
    ui->setupUi(this);
}

wgContentSma100B::~wgContentSma100B()
{
    delete ui;
}

void wgContentSma100B::on_btnRfFreq_clicked()
{
    mWgRfFreqShow ^= true;
    ui->wgRfFreq->setVisible(mWgRfFreqShow);
}


void wgContentSma100B::on_btnAdvRfFreq_clicked()
{
    mWgAdvRfShow ^= true;
    ui->wgAdvRfFreq->setVisible(mWgAdvRfShow);
}


void wgContentSma100B::on_btnPulseMod_clicked()
{
    mWgPulseModShow ^= true;
    ui->wgPulseMod->setVisible(mWgPulseModShow);
}


void wgContentSma100B::on_btnAdvPulse_clicked()
{
    mWgAdvPulseModShow ^= true;
    ui->wgAdvPulseMod->setVisible(mWgAdvPulseModShow);
}


void wgContentSma100B::on_btnRfLevel_clicked()
{
    mWgRfLevelShow ^= true;
    ui->wgRfLevel->setVisible(mWgRfLevelShow);
}


void wgContentSma100B::on_btnAdvRfLevel_clicked()
{
    mWgAdvRfLevelShow ^= true;
    ui->wgAdvRfLevel->setVisible(mWgAdvRfLevelShow);
}
