#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "point.hpp"

class Circle {

    private:
        double *radius;

    public:
        Point circleCenter;

        Circle(Point p, double r) : circleCenter(p){
            radius = new double;
            *radius = r;
        }

        ~Circle(){
            delete radius;
        }

        double getRadius() const {
            return *radius;
        }

        void setRadius(double r){
            if(r <= 0){
                std::cout << "Incorrect radius value!" << std::endl;
            }
            else{
            *radius = r;
            }
        }

        double area() const {
            return M_PI * (*radius) * (*radius);
        }
    
};
