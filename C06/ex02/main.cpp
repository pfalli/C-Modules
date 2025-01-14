#include <iostream>
#include <string>
#include "Base.hpp"


int main(){
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 3;
    std::cout << random << std::endl;

    return 0;
}