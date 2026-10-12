#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::string word;

    std::cout << "Enter a word: ";
    std::cin >> word;
    int wordSize = word.size();
    //std::cout << wordSize << std::endl;
    
    std::cout << "Your word in reverse: ";
    
    for (int i = wordSize; i > -1; --i){
        std::cout << word[i];
    }

    std::cout << std::endl;

    std::reverse(word.begin(), word.end());

    std::cout << word << std::endl;

    return 0;
}
