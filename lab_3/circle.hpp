#define _USE_MATH_DEFINES
#include <iostream>
#include "point.hpp"
#include <cmath>

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

        void setRadius(double r){
            if(r <= 0){
                std::cout << "Incorrect value!" << std::endl;
            }
            else{
                *radius = r;
            }
        }        

        double getRadius() const {
            return *radius;
        } 

        double area() const {
            return M_PI * (*radius) * (*radius);
        }
    
};
