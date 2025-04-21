#ifndef WGCONTENTOSP230_H
#define WGCONTENTOSP230_H

#include <QWidget>

namespace Ui {
class wgContentOsp230;
}

class wgContentOsp230 : public QWidget
{
    Q_OBJECT

public:
    explicit wgContentOsp230(QWidget *parent = nullptr);
    ~wgContentOsp230();

private slots:
    void on_btnOutput_clicked();

private:
    Ui::wgContentOsp230 *ui;
    bool mWgOutputShow;
};

#endif // WGCONTENTOSP230_H
