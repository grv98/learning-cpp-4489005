// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose{dairy,meat,pet,show};

struct cow{
    std::string cowName;
    int cowAge;
    cow_purpose purpose;
};

int main(){
    cow myCow;
    myCow.cowName = "moti";
    myCow.cowAge = 5;
    myCow.purpose = cow_purpose::dairy;

    std::cout << "Cow's name is : "<< myCow.cowName << "and purpose is " << (int)myCow.purpose << std::endl;
    std::cout << "Cow;s name is : "<< myCow.cowName << "and cow's age is : "<< myCow.cowAge << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
