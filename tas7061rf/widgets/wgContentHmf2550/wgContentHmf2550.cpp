#include "wgContentHmf2550.h"
#include "ui_wgContentHmf2550.h"

wgContentHmf2550::wgContentHmf2550(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wgContentHmf2550)
    , mWgWaveformShow(true)
    , mWgSignalOutShow(true)
    , mWgTriggerShow(true)
{
    ui->setupUi(this);

    initialize();
}

wgContentHmf2550::~wgContentHmf2550()
{
    delete ui;
}

void wgContentHmf2550::initialize()
{
    // mLayout = new QVBoxLayout();
    // mLayout->setSpacing(0);
    // mLayout->setContentsMargins(0, 0, 0, 0);
    // ui->wgWaveType->setLayout(mLayout);
    // mLayout->

    for(int i = 0; i < ui->cbbWaveType->count(); i++) {
        switch (i) {
        case 0:
            mWgWaveMap.insert(ui->cbbWaveType->itemText(i), new wgSquare());
            break;
        case 1:
            mWgWaveMap.insert(ui->cbbWaveType->itemText(i), new wgTriangle());
            break;
        case 2:
            mWgWaveMap.insert(ui->cbbWaveType->itemText(i), new wgPulse());
            break;
        case 3:
            mWgWaveMap.insert(ui->cbbWaveType->itemText(i), new wgArbitrary());
            break;
        default:
            break;
        }
    }

    mCurrentWg = mWgWaveMap[ui->cbbWaveType->currentText()];
    ui->vLayoutWaveType->addWidget(mCurrentWg);
}

void wgContentHmf2550::setWgWaveType(const QString &type)
{
    if (mCurrentWg == mWgWaveMap[type])
        return;
    mCurrentWg->setVisible(false);
    ui->vLayoutWaveType->removeWidget(mCurrentWg);
    mCurrentWg = mWgWaveMap[type];
    mCurrentWg->setVisible(true);
    ui->vLayoutWaveType->addWidget(mCurrentWg);
}

void wgContentHmf2550::on_btnWaveform_clicked()
{
    mWgWaveformShow ^= true;
    ui->wgWaveForm->setVisible(mWgWaveformShow);
    setWgWaveType(ui->cbbWaveType->currentText());
}


void wgContentHmf2550::on_btnSignalOut_clicked()
{
    mWgSignalOutShow ^= true;
    ui->wgSignalOut->setVisible(mWgSignalOutShow);
}


void wgContentHmf2550::on_btnTrigger_clicked()
{
    mWgTriggerShow ^= true;
    ui->wgTrigger->setVisible(mWgTriggerShow);
}


void wgContentHmf2550::on_cbbWaveType_currentTextChanged(const QString &arg1)
{
    setWgWaveType(arg1);
}

