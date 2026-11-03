#include <iostream>
#include "point.hpp"
#include "figure.hpp"
#include "rectangle.hpp"
#include "square.hpp"
#include "circle.hpp"

int main() {

    Point centerR(-1.0, 2.0);
    Point centerS(0.0, 3.0);
    Point centerC(-2.0, -3.0);

    Rectangle rectangle(centerR, 3.0, 5.0);
    Square square(centerS, 2.0);
    Circle circle(centerC, 4.0);

    std::cout << "Center of the rectangle: (" << rectangle.figureCenter.x << ", " << rectangle.figureCenter.y << "), sides: a = " << rectangle.getA() << ", b = " << 
        rectangle.getB() << " and its area: " << rectangle.area() << std::endl; 
    std::cout << "Center of the square: (" << square.figureCenter.x << ", " << square.figureCenter.y << "), sides: a = " << square.getA() << " and its area: " 
        << square.area() << std::endl;
    std::cout << "Center of the circle: (" << circle.figureCenter.x << ", " << circle.figureCenter.y << "), radius: " << circle.getRadius() << " and its area: " 
        << circle.area() << std::endl;

    return 0;
}

