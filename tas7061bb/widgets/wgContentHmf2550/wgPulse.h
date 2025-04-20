#ifndef WGPULSE_H
#define WGPULSE_H

#include <QWidget>

namespace Ui {
class wgPulse;
}

class wgPulse : public QWidget
{
    Q_OBJECT

public:
    explicit wgPulse(QWidget *parent = nullptr);
    ~wgPulse();

private:
    Ui::wgPulse *ui;
};

#endif // WGPULSE_H
