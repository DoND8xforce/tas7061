#ifndef WGCONTENTFPL1003_H
#define WGCONTENTFPL1003_H

#include <QWidget>

namespace Ui {
class wgContentFpl1003;
}

class wgContentFpl1003 : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentFpl1003(QWidget *parent = nullptr);
    ~wgContentFpl1003();

private slots:
    void on_btnFreqSpan_clicked();
    void on_btnRefLevel_clicked();
    void on_btnTrigger_clicked();

    void on_btnAdv_clicked();

private:
    Ui::wgContentFpl1003 *ui;
    bool mWgFreqSpanShow;
    bool mWgRefLevelShow;
    bool mWgAdvShow;
    bool mWgTriggerShow;
};

#endif // WGCONTENTFPL1003_H
