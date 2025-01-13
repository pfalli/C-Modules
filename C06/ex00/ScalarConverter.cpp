#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << "Default constructor called" << std::endl;
    return ;
}


ScalarConverter::ScalarConverter(const ScalarConverter &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return ;
}


ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}


ScalarConverter::~ScalarConverter() {
    std::cout << "Default destructor called" << std::endl;
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------

int getType(std::string input) {

}


void printing(char c, int num, float f, double d, bool is_valid, bool displayable) {
    if (num > 32 && num < 127) {
        std::cout << "char: " << c << std::endl;
        if (displayable == true) {
            std::cout << "int: " << num << std::endl;
        }
        else {
            std::cout << "int: Non displayable" << std::endl;
        }
        std::cout << "float: " << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
    else if (is_valid == true) {
        std::cout << "char: Non displayable" << std::endl;
        if (displayable == true) {
            std::cout << "int: " << num << std::endl;
        }
        else {
            std::cout << "int: Non displayable" << std::endl;
        }
        std::cout << "float: " << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
}


void handle_int(int num) {
    char conv_char = static_cast<int>(num);
    float conv_float = static_cast<float>(num);
    double conv_double = static_cast<double>(num);
    printing(conv_char, num, conv_float, conv_double, true, true);
}


void ScalarConverter::convert(std::string input) {
    if (input.empty()) {
        std::cout << "Input is empty!" << std::endl;
        return ;
    }
    int type = getType(input);
    long int temp = atol(input.c_str());
    if (type != 1 && (temp > INT_MAX || temp < INT_MIN )) {
        type = FLOAT;
    }
    switch(type) {
        case 1:
            std::cout << "Error: incorrect input!" << std::endl;
            break;
        case 2:
            handle_int(std::atoi(input.c_str())); // converting ascii string to INT
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        
    }
}