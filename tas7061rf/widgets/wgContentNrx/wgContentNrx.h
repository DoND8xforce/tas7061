#ifndef WGCONTENTNRX_H
#define WGCONTENTNRX_H

#include <QWidget>

namespace Ui {
class wgContentNrx;
}

class wgContentNrx : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentNrx(QWidget *parent = nullptr);
    ~wgContentNrx();

private slots:
    void on_btnTrigger_clicked();

private:
    Ui::wgContentNrx *ui;
    bool mWgTriggerShow;
};

#endif // WGCONTENTNRX_H
