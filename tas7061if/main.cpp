#include "wgMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFont font("Roboto Condensed");
    font.setStyleHint(QFont::Monospace);
    QApplication::setFont(font);

    wgMainWindow w;
    w.show();
    return a.exec();
}
