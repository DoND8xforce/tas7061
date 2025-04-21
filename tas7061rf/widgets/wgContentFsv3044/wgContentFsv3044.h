#ifndef WGCONTENTFSV3044_H
#define WGCONTENTFSV3044_H

#include <QWidget>

namespace Ui {
class wgContentFsv3044;
}

class wgContentFsv3044 : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentFsv3044(QWidget *parent = nullptr);
    ~wgContentFsv3044();

private slots:
    void on_btnFreqSpan_clicked();
    void on_btnRefLevel_clicked();
    void on_btnAdv_clicked();
    void on_btnTrigger_clicked();

private:
    Ui::wgContentFsv3044 *ui;
    bool mWgFreqSpanShow;
    bool mWgRefLevelShow;
    bool mWgAdvShow;
    bool mWgTriggerShow;
};

#endif // WGCONTENTFSV3044_H
