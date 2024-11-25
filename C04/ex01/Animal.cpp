#include "Animal.hpp"

Animal::Animal() {
    this->type = "Generic Animal";
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------


void Animal::makeSound() const {
    std::cout << "Animals make sounds!" << std::endl;
}

std::string Animal::getType() const {
    return (this->type);
}