#include "rainbow.hpp"

#define HEIGHT 600
#define WIDTH 1000

Rainbow::Rainbow()
{
    this->scene = new QGraphicsScene(this);

    QBrush brush(Qt::black);
    this->setBackgroundBrush(brush);
    this->scene->setSceneRect(0, 0, WIDTH, HEIGHT);
    this->setFixedSize(WIDTH, HEIGHT);

    this->setScene(scene);

    this->timer = new QTimer();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(add()));
    this->timer->start(10);

    for(unsigned int i(0) ; i < 150 ; i++) {
        Rain *r = new Rain(rand() % WIDTH, rand() % (HEIGHT-10), rand() % 50, (rand() % 60) + 10, rand() % 255, rand() % 255, rand() % 255);
        this->scene->addItem(r);
    }
}
