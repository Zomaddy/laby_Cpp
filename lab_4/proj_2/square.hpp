#pragma once
#include "rectangle.hpp"

class Square : public Rectangle {
public:
    Square(const Point &p, double side) : Rectangle(p, side, side) {
    }

    ~Square(){
    }
};




