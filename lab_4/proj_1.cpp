#include <iostream>

class Animal {
public:
    virtual ~Animal(){
    }
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    ~Dog(){
    }
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {    
public:
    ~Cat(){
    }
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

Animal *chooseAnimal(int number) {
    if(number%2 == 0){
        Animal *dog = new Dog();
        return dog;
    } else {
        Animal *cat = new Cat();
        return cat;
    }
}

int main() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    Animal *animal = chooseAnimal(x);
    animal->makeSound();

    delete animal;

    return 0;
}



