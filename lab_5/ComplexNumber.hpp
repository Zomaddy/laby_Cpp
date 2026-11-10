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
        double real = (re * other.re) - (im * other.im);
        double imag = (re * other.im) + (im * other.re);

        return ComplexNumber(real, imag);
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        double denominator = (other.re * other.re) + (other.im * other.im);

        if (denominator == 0) {
            throw std::invalid_argument("Don't divide by 0!");
        }
        double numeratorRe = (re * other.re) + (im * other.im);
        double numeratorIm = (im * other.re) - (re * other.im);
        
        return ComplexNumber(numeratorRe, numeratorIm);
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
        double real = (re * other.re) - (im * other.im);
        double imag = (re * other.im) + (im * other.re);
        re = real;
        im = imag;
        return *this;
    }

    ComplexNumber& operator/=(const ComplexNumber& other) {
        double denominator = (other.re * other.re) + (other.im * other.im);

        if (denominator == 0) {
            throw std::invalid_argument("Don't divide by 0!");
        }
        double numeratorRe = (re * other.re) + (im * other.im);
        double numeratorIm = (im * other.re) - (re * other.im);
        re = numeratorRe/denominator;
        im = numeratorIm/denominator;

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
