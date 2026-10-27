#include <iostream>

class Point {
    public:
        double coorX {};
        double coorY {};

        Point(double x, double y) : coorX(x), coorY(y){
        }

        void display() const {
            std::cout << "(" << coorX << ", " << coorY << ")" << std::endl;

        }
};
