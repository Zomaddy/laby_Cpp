#include <iostream>
#include "ComplexNumber.hpp"

int main() {

    zs::jpo::ComplexNumber c1(4.0, 5.0);
    zs::jpo::ComplexNumber c2(2.0, -8.0);

    //operator+
    zs::jpo::ComplexNumber c3 = c1 + c2;
    std::cout << "ADDITION: " << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1 + c2 = " << c3 <<  std::endl;
    double someNumber = 13.3;
    std::cout << "number: " << someNumber << std::endl;
    std::cout << "c1 + number = " << c1 + someNumber << std::endl;
    std::cout << std::endl;

    //operator-
    zs::jpo::ComplexNumber c4 = c1 - c2;
    std::cout << "SUBTRACTION: " << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1 - c2 = " << c4 << std::endl;
    std::cout << "number: " << someNumber << std::endl;
    std::cout << "c1 - number = " << c1 - someNumber << std::endl;
    std::cout << std::endl;
    
    //operator*
    zs::jpo::ComplexNumber c5 = c1 * c2;
    std::cout << "MULTIPLICATION: " << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1 * c2 = " << c5 << std::endl;
    std::cout << std::endl;

    //operator/
    zs::jpo::ComplexNumber c6 = c1 / c2;
    std::cout << "DIVISION: " << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1 / c2 = " << c6 << std::endl;
    std::cout << std::endl;

    //operator+=
    std::cout << "OPERATOR +=:  " << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    c2 += c1;
    std::cout << "c2 += c1: " << c2 << std::endl;
    std::cout << "number: " << someNumber << std::endl;
    c1 += someNumber;
    std::cout << "c1 += number: " << c1 << std::endl;
    std::cout << std::endl;

    //operator-=
    std::cout << "OPERATOR -=:  " << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    c2 -= c1;
    std::cout << "c2 -= c1: " << c2 << std::endl;
    std::cout << "number: " << someNumber << std::endl;
    c1 -= someNumber;
    std::cout << "c1 -= number: " << c1 << std::endl;
    std::cout << std::endl;

    //operator*=
    std::cout << "OPERATOR *=:  " << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    c2 *= c1;
    std::cout << "c2 *= c1: " << c2 << std::endl;
    std::cout << std::endl;

    //operator/=
    std::cout << "OPERATOR /=:  " << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    c2 /= c1;
    std::cout << "c2 /= c1: " << c2 << std::endl;
    std::cout << std::endl;

    //operator ==
    zs::jpo::ComplexNumber c7(4.0, 5.0);

    std::cout << "OPERATOR == i != : " << std::endl;
    std::cout << "c7: " << c7 << std::endl;
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;

    if (c7 == c1) {
        std::cout << "c7 == c1" << std::endl;
    }
    else {
        std::cout << "c7 != c1" << std::endl;
    }

    if (c7 != c2) {
        std::cout << "c7 != c2" << std::endl;
    }
    else {
        std::cout << "c7 == c2" << std::endl;
    }

    return 0;
}
