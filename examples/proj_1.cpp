#include <iostream>

int main(){
    int x {};
    int sum {0};
    std::cout << "Enter the number: ";
    std::cin >> x;

    if (x > 0) {
        std::cout << "All the numbers to your number: " << std::endl;

    for (int i = 0; i <= x; i++){

        std::cout << i << std::endl;
        sum += i;     
    }

    std::cout << "Sum of all the numbers: " << sum << std::endl;
    
    }

    else if (x < 0){
        std::cout << "Your number is less than 0! Try again! " << std::endl;
        return 0;
    }
    
    else {
        std::cout << "Your input is not a number! Try again! " << std::endl;
    }

    return 0;
}
