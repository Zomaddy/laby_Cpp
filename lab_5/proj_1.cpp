#include <iostream>
#include "ComplexNumber.hpp"

int main() {

    ComplexNumber c1(4.0, 5.0);
    ComplexNumber c2(2.0, -8.0);

    //operator+
    ComplexNumber c3 = c1 + c2;
    std::cout << "ADDITION: " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;
    std::cout << "c1 + c2 = " << c3.re << " + " << c3.im << "j " << std::endl;
    std::cout << std::endl;

    //operator-
    ComplexNumber c4 = c1 - c2;
    std::cout << "SUBTRACTION: " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;

    if (c4.im > 0) {
        std::cout << "c1 - c2 = " << c4.re << " + " << c4.im << "j " << std::endl;
    }
    else {
        std::cout << "c1 - c2 = " << c4.re << c4.im << "j " << std::endl;  
    }
    std::cout << std::endl;

    //operator*
    ComplexNumber c5 = c1 * c2;
    std::cout << "MULTIPLICATION: " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;

    if (c5.im > 0) {
        std::cout << "c1 * c2 = " << c5.re << " + " << c5.im << "j " << std::endl;
    }
    else {
        std::cout << "c1 * c2 = " << c5.re << " " << c5.im << "j " << std::endl;  
    }
    std::cout << std::endl;

    //operator/
    ComplexNumber c6 = c1 / c2;
    std::cout << "DIVISION: " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;
    
    if (c6.im > 0) {
        std::cout << "c1 / c2 = " << c6.re << " + " << c6.im << "j " << std::endl;
    }
    else {
        std::cout << "c1 / c2 = " << c6.re << " " << c6.im << "j " << std::endl;  
    }
    std::cout << std::endl;

    //operator+=
    std::cout << "OPERATOR +=:  " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    
    c2 += c1;
    if (c2.im > 0) {
        std::cout << "c2 += c1: " << c2.re << " + " << c2.im << "j " << std::endl;
    }
    else {
        std::cout << "c2 += c1: " << c2.re << " " << c2.im << "j " << std::endl;  
    }
    std::cout << std::endl;

    //operator-=
    std::cout << "OPERATOR -=:  " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    
    c2 -= c1;
    if (c2.im > 0) {
        std::cout << "c2 -= c1: " << c2.re << " + " << c2.im << "j " << std::endl;
    }
    else {
        std::cout << "c2 -= c1: " << c2.re << " " << c2.im << "j " << std::endl;  
    }
    std::cout << std::endl;

    //operator*=
    std::cout << "OPERATOR *=:  " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    
    c2 *= c1;
    if (c2.im > 0) {
        std::cout << "c2 *= c1: " << c2.re << " + " << c2.im << "j " << std::endl;
    }
    else {
        std::cout << "c2 *= c1: " << c2.re << " " << c2.im << "j " << std::endl;  
    }
    std::cout << std::endl;

    //operator/=
    std::cout << "OPERATOR /=:  " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    
    c2 /= c1;
    if (c2.im > 0) {
        std::cout << "c2 /= c1: " << c2.re << " + " << c2.im << "j " << std::endl;
    }
    else {
        std::cout << "c2 /= c1: " << c2.re << " " << c2.im << "j " << std::endl;  
    }
    std::cout << std::endl;

    //operator ==
    ComplexNumber c7(4.0, 5.0);

    std::cout << "OPERATOR == i != : " << std::endl;
    std::cout << "c7: " << c7.re << " + " << c7.im << "j " << std::endl;
    std::cout << "c1: " << c1.re << " + " << c1.im << "j " << std::endl;
    std::cout << "c2: " << c2.re << " + " << c2.im << "j " << std::endl;

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
