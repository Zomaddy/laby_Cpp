#include <iostream>
#include <string>

class MyClass{
    private:
        std::string objectName;

    public:
        MyClass(std::string name) : objectName(name){
            std::cout << "Constructor of " << objectName << " called" << std::endl;
        }
        ~MyClass(){
            std::cout << "Destructor of " << objectName << " called" << std::endl;
        }
};

MyClass globalObject("global");

int main() {

    std::cout << "Entering main() function " << std::endl;

    MyClass localObject("local");

    {
        MyClass blockObject("block");
    }

    std::cout << "Leaving main() function" << std::endl;

    return 0;
}
