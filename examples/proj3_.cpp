#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    // initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    // generate random number from 1 to 100
    int randomNumber = rand() % 100 + 1;
    
    int userNumber {};

    std::cout << "Enter a number from 1 to 100: " << std::endl;
    std::cin >> userNumber;

    if(userNumber == randomNumber){
        std::cout << "Congrats! You've guessed the number!" << std::endl;
    }

    else if(userNumber < randomNumber){
        do{
        std::cout << "The number is too low. Try again!" << std::endl;
        }while (userNumber != randomNumber);
}

    else if(userNumber > randomNumber){
        do{
            std::cout << "The number is too high. Try again!" << std::endl;
        }while (userNumber != randomNumber);
    }

    else{
        std::cout << "You enterd something what is not a number!" << std::endl;
    }

    return 0;
}
