#include "wgSquare.h"
#include "ui_wgSquare.h"

wgSquare::wgSquare(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgSquare)
{
    ui->setupUi(this);
}

wgSquare::~wgSquare()
{
    delete ui;
}
