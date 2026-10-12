#include <iostream>
#include <vector> // required header

int main() {
    // default initialization of vector of ints, myVector is empty
    std::vector<int> myVector;
   
    // use push_back() to append some elements to the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // use size() to get the current vector size
    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;
    return 0;
} 
