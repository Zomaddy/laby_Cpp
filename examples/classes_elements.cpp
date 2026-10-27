#include <iostream>
#include <string>

class Student {

    private:
        std::string m_name;
        int m_age;

    public:
        void setAge(int a) {
            if(a < 0){
                std::cout << "Incorrect value!" << std::endl;
            }
            else{
            m_age = a;
            }
        }
        int getAge() const {
            return m_age;
        }
        void setName(std::string n) {
            if(n.empty()){
                std::cout << "Incorrect value!" << std::endl;
            }
            else{
            m_name = n;
            }
        }
        std::string getName() const {
            return m_name;
        }
};

int main(){
    
    Student studentCorrect;
    Student studentIncorrect;

    studentCorrect.setName("Jakub");
    studentCorrect.setAge(25);
    std::cout << "Name: " << studentCorrect.getName() << " and age: " << studentCorrect.getAge() << std::endl;

    studentIncorrect.setName("");
    studentIncorrect.setAge(-2);
    std::cout << "Name: " << studentIncorrect.getName() << " and age: " << studentIncorrect.getAge() << std::endl;

    return 0;
}
