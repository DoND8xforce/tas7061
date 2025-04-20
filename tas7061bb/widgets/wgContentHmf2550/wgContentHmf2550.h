#ifndef WGCONTENTHMF2550_H
#define WGCONTENTHMF2550_H

#include <QWidget>

namespace Ui {
class wgContentHmf2550;
}

class wgContentHmf2550 : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentHmf2550(QWidget *parent = nullptr);
    ~wgContentHmf2550();

private:
    Ui::wgContentHmf2550 *ui;
};

#endif // WGCONTENTHMF2550_H
