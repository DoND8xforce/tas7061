#ifndef WGCONTENTSMA100B_H
#define WGCONTENTSMA100B_H

#include <QWidget>

namespace Ui {
class wgContentSma100B;
}

class wgContentSma100B : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentSma100B(QWidget *parent = nullptr);
    ~wgContentSma100B();

private slots:
    void on_btnRfFreq_clicked();

    void on_btnAdvRfFreq_clicked();

    void on_btnPulseMod_clicked();

    void on_btnAdvPulse_clicked();

    void on_btnRfLevel_clicked();

    void on_btnAdvRfLevel_clicked();

private:
    Ui::wgContentSma100B *ui;
    bool mWgRfFreqShow;
    bool mWgPulseModShow;
    bool mWgRfLevelShow;
    bool mWgAdvPulseModShow;
    bool mWgAdvRfShow;
    bool mWgAdvRfLevelShow;
};

#endif // WGCONTENTSMA100B_H
