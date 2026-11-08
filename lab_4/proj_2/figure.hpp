#pragma once
#include "point.hpp"

class Figure {
public:
    Point figureCenter;

    Figure(const Point &p) : figureCenter(p) {
    }

    virtual ~Figure(){
    }

    virtual double area() = 0;
};



