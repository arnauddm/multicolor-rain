#include "rain.hpp"

#define WIDTH 1000
#define HEIGHT 600

#include <iostream>
#include <QPen>

Rain::Rain(unsigned int x, unsigned int y, unsigned int lenght, unsigned int speed, unsigned int r, unsigned int g, unsigned int b)
{
    this->timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    this->timer->start(speed);

    QPen pen;
    pen.setBrush(QColor(r, g, b));
    pen.setWidth(2);

    this->setPen(pen);


    this->setLine(x, y, x, y + lenght);
    std::cout << x << " " << y << " " << lenght << std::endl;
}

void Rain::move() {
    this->moveBy(0, 10);

    if(this->y() > HEIGHT)
        this->setY(0);
}
