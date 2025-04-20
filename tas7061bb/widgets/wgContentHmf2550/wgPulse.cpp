#include "wgPulse.h"
#include "ui_wgPulse.h"

wgPulse::wgPulse(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgPulse)
{
    ui->setupUi(this);
}

wgPulse::~wgPulse()
{
    delete ui;
}
