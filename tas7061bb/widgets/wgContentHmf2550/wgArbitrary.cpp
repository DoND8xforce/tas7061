#include "wgArbitrary.h"
#include "ui_wgArbitrary.h"

wgArbitrary::wgArbitrary(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgArbitrary)
{
    ui->setupUi(this);
}

wgArbitrary::~wgArbitrary()
{
    delete ui;
}
