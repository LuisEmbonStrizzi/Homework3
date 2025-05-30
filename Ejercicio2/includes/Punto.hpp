#pragma once

class Punto
{
private:
    double x, y;

public:
    Punto(double x = 0, double y = 0);
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
};