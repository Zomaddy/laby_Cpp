#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include "figure.hpp"
#include <cmath>

class Circle : public Figure {
private:
    double m_r{};

public:
    Circle(const Point &p, double radius) : Figure(p), m_r(radius){
    }

    double area() override {
        return M_PI * m_r * m_r;
    }

    double getRadius() const {
        return m_r;
    }
};



