#ifndef WGCONTENTRTM3004_H
#define WGCONTENTRTM3004_H

#include <QWidget>

namespace Ui {
class wgContentRtm3004;
}

class wgContentRtm3004 : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentRtm3004(QWidget *parent = nullptr);
    ~wgContentRtm3004();

private slots:
    void on_btnTrigger_clicked();

    void on_btnLevel_clicked();

    void on_btnScale_clicked();

private:
    Ui::wgContentRtm3004 *ui;
    bool mWgTriggerShow;
    bool mWgLevelShow;
    bool mWgScaleShow;
};

#endif // WGCONTENTRTM3004_H
