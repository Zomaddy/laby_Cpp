#include <iostream>
#include "circle.hpp"

int main(){

    Point center(2.0, 3.0);

    Circle circle(center, 5.0);

    std::cout << "Center of the circle: ";
    circle.circleCenter.display();

    std::cout << "Radius of the circle: " << circle.getRadius() << std::endl;

    std::cout << "Area of the circle: " << circle.area() << std::endl;

    circle.setRadius(3.5);

    circle.circleCenter.coorX = {0.0};
    circle.circleCenter.coorY = {-1.0};

    std::cout << "New radius: " << circle.getRadius() << std::endl;

    std::cout << "New center of the circle: ";
    circle.circleCenter.display();

    std::cout << "New area of the circle: " << circle.area() << std::endl;

    circle.setRadius(-5.0);

    std::cout << "Incorrect radius: " << circle.getRadius() << std::endl;

    return 0;
}
