#include <iostream>

double fahrencheitToCelsius(double fahrencheitTemperature){
        return (fahrencheitTemperature - 32.0)*(5.0/9.0); 
    }

int main(){

    double temp {};

    std::cout << "Enter a temperature in Fahrencheit: " << std::endl;
    std::cin >> temp;

    double result = fahrencheitToCelsius(temp);

    std::cout << "Temperature in Celsius: " << result << std::endl;
   
    return 0;
}

