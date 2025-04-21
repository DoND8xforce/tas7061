#ifndef WGCONTENTSMB100B_H
#define WGCONTENTSMB100B_H

#include <QWidget>

namespace Ui {
class wgContentSmb100B;
}

class wgContentSmb100B : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentSmb100B(QWidget *parent = nullptr);
    ~wgContentSmb100B();

private slots:
    void on_btnRfFreq_clicked();

    void on_btnAdvRfFreq_clicked();

    void on_btnPulseMod_clicked();

    void on_btnAdvPulse_clicked();

    void on_btnRfLevel_clicked();

    void on_btnAdvRfLevel_clicked();

private:
    Ui::wgContentSmb100B *ui;
    bool mWgRfFreqShow;
    bool mWgPulseModShow;
    bool mWgRfLevelShow;
    bool mWgAdvPulseModShow;
    bool mWgAdvRfShow;
    bool mWgAdvRfLevelShow;
};

#endif // WGCONTENTSMB100B_H
