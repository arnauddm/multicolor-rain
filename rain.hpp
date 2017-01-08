#ifndef RAIN_HPP
#define RAIN_HPP

#include <time.h>

#include <QObject>
#include <QGraphicsLineItem>
#include <QTimer>

class Rain : public QObject, public QGraphicsLineItem
{
    Q_OBJECT
public:
    Rain(unsigned int x, unsigned int y, unsigned int lenght, unsigned int speed, unsigned int r, unsigned int g, unsigned b);

private:
    QTimer *timer;

signals:

public slots:
    void move();
};

#endif // RAIN_HPP
