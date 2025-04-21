#include "wgContentOsp230.h"
#include "ui_wgContentOsp230.h"

wgContentOsp230::wgContentOsp230(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentOsp230)
    , mWgOutputShow(true)
{
    ui->setupUi(this);
}

wgContentOsp230::~wgContentOsp230()
{
    delete ui;
}

void wgContentOsp230::on_btnOutput_clicked()
{
    mWgOutputShow ^= true;
    ui->wgOutput->setVisible(mWgOutputShow);
}

