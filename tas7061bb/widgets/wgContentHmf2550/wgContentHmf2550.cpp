#include "wgContentHmf2550.h"
#include "ui_wgContentHmf2550.h"

wgContentHmf2550::wgContentHmf2550(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentHmf2550)
{
    ui->setupUi(this);
}

wgContentHmf2550::~wgContentHmf2550()
{
    delete ui;
}
