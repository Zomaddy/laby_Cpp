#pragma once
#include <iostream>
#include "figure.hpp"

class Rectangle : public Figure {
    protected:
        double m_a{};
        double m_b{};

    public:
        Rectangle(const Point &p, double sideA, double sideB) : Figure(p), m_a(sideA), m_b(sideB){
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
