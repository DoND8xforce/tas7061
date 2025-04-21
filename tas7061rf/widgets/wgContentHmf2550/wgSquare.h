#ifndef WGSQUARE_H
#define WGSQUARE_H

#include <QWidget>

namespace Ui {
class wgSquare;
}

class wgSquare : public QWidget
{
    Q_OBJECT

public:
    explicit wgSquare(QWidget *parent = nullptr);
    ~wgSquare();

private:
    Ui::wgSquare *ui;
};

#endif // WGSQUARE_H
