#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
    return ;
}

Cat::~Cat() {
    std::cout << "Cat deconstructor called" << std::endl;
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------

void Cat::makeSound() const {
    std::cout << "Miaw 🐱" << std::endl;
}

std::string Cat::getType() const {
    return (this->type);
}