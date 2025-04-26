#include "MiniBrowser.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MiniBrowser w;
    w.show();
    return a.exec();
}
