#ifndef RAINBOW_HPP
#define RAINBOW_HPP

#include "rain.hpp"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>

class Rainbow : public QGraphicsView
{
public:
    Rainbow();

private:
    QGraphicsScene *scene;
    QTimer *timer;

public slots:
    void add();
};

#endif // RAINBOW_HPP
