#include "Base.hpp"

Base::~Base() {
    std::cout << "Default destructor called" << std::endl;
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------

Base * generate(void) {
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 3;
    switch (random) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
}

void identify(Base* p) {

}

void identify(Base& p) {

}