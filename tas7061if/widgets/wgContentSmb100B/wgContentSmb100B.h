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

private:
    Ui::wgContentSmb100B *ui;
};

#endif // WGCONTENTSMB100B_H
