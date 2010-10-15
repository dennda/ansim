#include <QtGui/QApplication>
#include "ansim.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AnSim w;
    w.show();

    return a.exec();
}
