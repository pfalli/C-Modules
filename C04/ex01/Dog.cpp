#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal() {
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
    return ;
}


Dog::~Dog() {
    std::cout << "Dog deconstructor called" << std::endl;
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------

void Dog::makeSound() const {
    std::cout << "Bau 🐶" << std::endl;
}

std::string Dog::getType() const {
    return (this->type);
}