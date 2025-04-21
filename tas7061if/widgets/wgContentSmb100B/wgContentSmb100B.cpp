#include "wgContentSmb100B.h"
#include "ui_wgContentSmb100B.h"

wgContentSmb100B::wgContentSmb100B(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentSmb100B)
    , mWgRfFreqShow(true)
    , mWgPulseModShow(true)
    , mWgRfLevelShow(true)
    , mWgAdvPulseModShow(true)
    , mWgAdvRfShow(true)
    , mWgAdvRfLevelShow(true)
{
    ui->setupUi(this);
}

wgContentSmb100B::~wgContentSmb100B()
{
    delete ui;
}

void wgContentSmb100B::on_btnRfFreq_clicked()
{
    mWgRfFreqShow ^= true;
    ui->wgRfFreq->setVisible(mWgRfFreqShow);
}


void wgContentSmb100B::on_btnAdvRfFreq_clicked()
{
    mWgAdvRfShow ^= true;
    ui->wgAdvRfFreq->setVisible(mWgAdvRfShow);
}


void wgContentSmb100B::on_btnPulseMod_clicked()
{
    mWgPulseModShow ^= true;
    ui->wgPulseMod->setVisible(mWgPulseModShow);
}


void wgContentSmb100B::on_btnAdvPulse_clicked()
{
    mWgAdvPulseModShow ^= true;
    ui->wgAdvPulseMod->setVisible(mWgAdvPulseModShow);
}


void wgContentSmb100B::on_btnRfLevel_clicked()
{
    mWgRfLevelShow ^= true;
    ui->wgRfLevel->setVisible(mWgRfLevelShow);
}


void wgContentSmb100B::on_btnAdvRfLevel_clicked()
{
    mWgAdvRfLevelShow ^= true;
    ui->wgAdvRfLevel->setVisible(mWgAdvRfLevelShow);
}

