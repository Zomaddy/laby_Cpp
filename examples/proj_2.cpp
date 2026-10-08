#include <iostream>

int main(){

    int x {};
    int arr[5] = {};

    std::cout << "Enter the number: " << std::endl;

    for(int i = 0; i < 5; i++){
        std::cin >> x;
        arr[i] = x;
    }

    std::cout << "Your numbers: " << std::endl;

    for(int i = 0; i < 5; i++){
        std::cout << arr[i] << std::endl;
    }    

    return 0;

}
