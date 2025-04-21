#include "wgContentNrx.h"
#include "ui_wgContentNrx.h"

wgContentNrx::wgContentNrx(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentNrx)
    , mWgTriggerShow(true)
{
    ui->setupUi(this);
}

wgContentNrx::~wgContentNrx()
{
    delete ui;
}

void wgContentNrx::on_btnTrigger_clicked()
{
    mWgTriggerShow ^= true;
    ui->wgTrigger->setVisible(mWgTriggerShow);
}

