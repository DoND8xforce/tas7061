#include "wgTriangle.h"
#include "ui_wgTriangle.h"

wgTriangle::wgTriangle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgTriangle)
{
    ui->setupUi(this);
}

wgTriangle::~wgTriangle()
{
    delete ui;
}
