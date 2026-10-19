#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string word;
    std::string reverseWord {}; 

    std::cout << "Enter a word: ";
    std::cin >> word;
    int wordSize = word.size();

    std::string reverseWord2 {word};

    for(int i = wordSize - 1; i >= 0; --i){
        reverseWord += word[i];
    }

    std::cout << reverseWord << std::endl;
 
    if(reverseWord == word){
        std::cout << "Your word is a palindrome!" << std::endl;
    }
    else{
        std::cout << "Your word is not really special" << std::endl;
    }

    std::reverse(reverseWord2.begin(), reverseWord2.end());

    if(reverseWord2 == word){
        std::cout << "Your word is a palindrome!" << std::endl;
    }
    else{
        std::cout << "Your word is not really special" << std::endl;
    }
    return 0;
}
