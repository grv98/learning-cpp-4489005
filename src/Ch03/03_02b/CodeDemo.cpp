// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    //getter
    std::string getName() const{
        return name;
    }
    int getAge() const{
        return age;
    }
    cow_purpose getcowPurpose() const{
        return purpose;
    }
    //setters
    void setName(std::string newName){
        name = newName;
    }
    void setAge(int newAge){
        age = newAge;
    }
    void setPurpose(cow_purpose newPurpose){
        purpose = newPurpose;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("kamdhenu",5,cow_purpose::dairy);
    std::cout << my_cow.getName() << " is a type-" << (int)my_cow.getcowPurpose() << " cow." << std::endl;
    std::cout << my_cow.getName() << " is " << my_cow.getAge() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    
    my_cow.setAge(10);

    std::cout << my_cow.getName() << " is " << my_cow.getAge() << " years old." << std::endl;
    return (0);
}
