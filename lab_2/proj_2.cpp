#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::string word;

    std::cout << "Enter a word: ";
    std::cin >> word;
    int wordSize = word.size();
    
    std::cout << "Your word in reverse: ";
    
    for (int i = wordSize - 1; i >= 0; --i){
        std::cout << word[i];
    }

    std::cout << std::endl;

    std::reverse(word.begin(), word.end());

    std::cout << word << std::endl;

    return 0;
}
