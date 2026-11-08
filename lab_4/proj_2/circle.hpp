#pragma once
#define _USE_MATH_DEFINES
#include "figure.hpp"
#include <cmath>
#include <stdexcept>

class Circle : public Figure {
private:
    double m_r{};

public:
    Circle(const Point &p, double radius) : Figure(p), m_r(radius){
        if(m_r <= 0){
            throw std::invalid_argument("Incorrect value!");
        }
    }

    ~Circle() {
    }

    double area() override {
        return M_PI * m_r * m_r;
    }

    double getRadius() const {
        return m_r;
    }
};



