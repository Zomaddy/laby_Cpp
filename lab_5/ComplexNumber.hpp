#include <iostream>
#include <stdexcept>


class ComplexNumber {
public:
    double re;
    double im;

    ComplexNumber(double r = 0.0, double i = 0.0) : re(r), im(i) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(re + other.re, im + other.im);
    }

    friend ComplexNumber operator+(const ComplexNumber& c, double number) {
        return ComplexNumber(c.re + number, c.im);
    }

    friend ComplexNumber operator+(double number, const ComplexNumber& c) {
        return ComplexNumber(number + c.re, c.im);
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(re - other.re, im - other.im);
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        return ComplexNumber(re * other.re, im * other.im);
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        if ((other.re || other.im) == 0) {
            throw std::invalid_argument("Don't divide by 0!");
        }
        else {
            return ComplexNumber(re / other.re, im / other.im);
        }
    }

    ComplexNumber& operator+=(const ComplexNumber& other) {
        re += other.re;
        im += other.im;
        return *this;
    }

    ComplexNumber& operator-=(const ComplexNumber& other) {
        re -= other.re;
        im -= other.im;
        return *this;
    }

    ComplexNumber& operator*=(const ComplexNumber& other) {
        re *= other.re;
        im *= other.im;
        return *this;
    }

    ComplexNumber& operator/=(const ComplexNumber& other) {
        re /= other.re;
        im /= other.im;
        return *this;
    }

    bool operator==(const ComplexNumber& other) const {
        return (re == other.re && im == other.im);
    }

    bool operator !=(const ComplexNumber& other) const {
        return (re != other.re || im != other.im);
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
        os << c.re << (c.im >= 0 ? " + " : " - ") << std::abs(c.im) << "i";
        return os;
    }
};
