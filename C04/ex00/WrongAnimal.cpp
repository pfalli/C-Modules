#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal deconstructor called" << std::endl;
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal make sounds!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->type);
}