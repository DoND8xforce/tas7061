#ifndef WGARBITRARY_H
#define WGARBITRARY_H

#include <QWidget>

namespace Ui {
class wgArbitrary;
}

class wgArbitrary : public QWidget
{
    Q_OBJECT

public:
    explicit wgArbitrary(QWidget *parent = nullptr);
    ~wgArbitrary();

private:
    Ui::wgArbitrary *ui;
};

#endif // WGARBITRARY_H
