#ifndef WGTRIANGLE
#define WGTRIANGLE

#include <QWidget>

namespace Ui {
class wgTriangle;
}

class wgTriangle : public QWidget
{
    Q_OBJECT

public:
    explicit wgTriangle(QWidget *parent = nullptr);
    ~wgTriangle();

private:
    Ui::wgTriangle *ui;
};

#endif // WGTRIANGLE
