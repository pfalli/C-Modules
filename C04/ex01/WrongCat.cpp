#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "Mouse";
    std::cout << "WrongCat constructor called" << std::endl;
    return ;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat deconstructor called" << std::endl;
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------

void WrongCat::makeSound() const {
    std::cout << "Miaw 🐱" << std::endl;
}

std::string WrongCat::getType() const {
    return (this->type);
}