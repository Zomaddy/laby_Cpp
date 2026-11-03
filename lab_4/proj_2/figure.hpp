#pragma once
#include <iostream>
#include "point.hpp"

class Figure {
public:
    Point figureCenter;

    Figure(const Point &p) : figureCenter(p) {
    }

    virtual double area() = 0;
};



