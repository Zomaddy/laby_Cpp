#pragma once
#include <iostream>
#include "figure.hpp"
#include <stdexcept>

class Rectangle : public Figure {
protected:
    double m_a{};
    double m_b{};

public:
    Rectangle(const Point &p, double sideA, double sideB) : Figure(p), m_a(sideA), m_b(sideB) {
        if(m_a <= 0 || m_b <= 0){
            throw std::invalid_argument("Incorrect value!");
        }
    }

    double area() override {
        return m_a * m_b;
    }

    double getA() const {
        return m_a;
    }

    double getB() const {
        return m_b;
    }
};
