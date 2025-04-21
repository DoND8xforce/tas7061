#include "wgContentSmb100B.h"
#include "ui_wgContentSmb100B.h"

wgContentSmb100B::wgContentSmb100B(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentSmb100B)
{
    ui->setupUi(this);
}

wgContentSmb100B::~wgContentSmb100B()
{
    delete ui;
}
