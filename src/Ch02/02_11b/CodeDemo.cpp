// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>


enum class cow_purpose {milk, meat, pet, show};

int main(){

    
    cow_purpose a = cow_purpose::meat;
    std::cout << "a :" << (int)a << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
