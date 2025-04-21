#ifndef WGMAINWINDOW_H
#define WGMAINWINDOW_H

#include <QMainWindow>
#include <QScrollArea>


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


private slots:
    void on_btnRmt3004_clicked();

    void on_btnFpl1003_clicked();

    void on_btnHmf2550_clicked();

private:
    Ui::wgMainWindow *ui;
    QScrollArea* mScrollArea;
    QMap<QString, QWidget*> mWgContentsMap;
};

#endif // WGMAINWINDOW_H
