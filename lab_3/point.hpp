#include <iostream>

class Point {
    public:
        float coorX {};
        float coorY {};

        Point(float x, float y) : coorX(x), coorY(y){
        }

        void display() const {
            std::cout << "(" << coorX << ", " << coorY << ")" << std::endl;

        }
};
