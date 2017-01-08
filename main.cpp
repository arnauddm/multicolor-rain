#include "rainbow.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Rainbow *rb = new Rainbow();
    rb->show();

    return a.exec();
}
