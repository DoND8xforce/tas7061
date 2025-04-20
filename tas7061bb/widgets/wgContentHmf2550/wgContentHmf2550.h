#ifndef WGCONTENTHMF2550_H
#define WGCONTENTHMF2550_H

#include <QWidget>

#include "wgSquare.h"
#include "wgTriangle.h"
#include "wgPulse.h"
#include "wgArbitrary.h"
#include <QVBoxLayout>
#include <QMap>

namespace Ui {
class wgContentHmf2550;
}

class wgContentHmf2550 : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentHmf2550(QWidget *parent = nullptr);
    ~wgContentHmf2550();
    void initialize();
    void setWgWaveType(const QString &type);
private slots:
    void on_btnWaveform_clicked();
    void on_btnSignalOut_clicked();
    void on_btnTrigger_clicked();
    void on_cbbWaveType_currentTextChanged(const QString &arg1);

private:
    Ui::wgContentHmf2550 *ui;
    QVBoxLayout *mLayout;
    bool mWgWaveformShow;
    bool mWgSignalOutShow;
    bool mWgTriggerShow;
    QMap<QString, QWidget*> mWgWaveMap;
    QWidget* mCurrentWg;

};

#endif // WGCONTENTHMF2550_H
