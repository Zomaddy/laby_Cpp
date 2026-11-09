#include <iostream>
#include <stdexcept>
#include <type_traits>

namespace zs {
namespace jpo {

template <typename T>
requires std::is_arithmetic_v<T>

class ComplexNumber {
public:
    T re;
    T im;

    ComplexNumber(T r = 0.0, T i = 0.0) : re(r), im(i) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(re + other.re, im + other.im);
    }

    friend ComplexNumber operator+(const ComplexNumber& c, T number) {
        return ComplexNumber(c.re + number, c.im);
    }

    friend ComplexNumber operator+(T number, const ComplexNumber& c) {
        return ComplexNumber(number + c.re, c.im);
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(re - other.re, im - other.im);
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        T real = (re * other.re) - (im * other.im);
        T imag = (re * other.im) + (im * other.re);

        return ComplexNumber(real, imag);
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        T denominator = (other.re * other.re) + (other.im * other.im);

        if (denominator == 0) {
            throw std::invalid_argument("Don't divide by 0!");
        }
        T numeratorRe = ((re * other.re) + (im * other.im))/denominator;
        T numeratorIm = ((im * other.re - re * other.im))/denominator;
        
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

}
}
