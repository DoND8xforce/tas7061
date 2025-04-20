#ifndef WGMAINWINDOW_H
#define WGMAINWINDOW_H

#include <QMainWindow>

#include "wgContentRtm3004.h"

namespace Ui {
class wgMainWindow;
}

class wgMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit wgMainWindow(QWidget *parent = nullptr);
    ~wgMainWindow();

    void initialize();

private:
    Ui::wgMainWindow *ui;

    wgContentRtm3004 *mWgRtm;
};

#endif // WGMAINWINDOW_H
