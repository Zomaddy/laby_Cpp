#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string sentence {};
    char letter {};
    int sum {0};

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    for(int i = 0; i < sentence.size(); ++i){

        if(std::isupper(sentence[i])){
            sentence[i] = std::tolower(sentence[i]);
        }

        if(sentence[i] == letter){
            sum += 1;
        }

    }
    std::cout << sentence << std::endl;

    std::cout << "Your chosen letter repeats " << sum << " times" << std::endl;
    return 0;
}
