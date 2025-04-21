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
    void on_btnSma100B_clicked();
    void on_btnFsv3044_clicked();
    void on_btnNrx_clicked();
    void on_btnOsp230_clicked();

private:
    Ui::wgMainWindow *ui;
    QScrollArea* mScrollArea;
    QMap<QString, QWidget*> mWgContentsMap;
};

#endif // WGMAINWINDOW_H
