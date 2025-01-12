#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.cpp"

// void Form_exceptions(void)
// {
//     try
//     {
//         Form resign("resign", 0, 10);
//     }
//     catch (std::exception &err){
//         std::cerr << err.what() << std::endl;
//     }
//     try
//     {
//         Form resign("resign", 10, 0);
//     }
//     catch (std::exception &err){
//         std::cerr << err.what() << std::endl;
//     }
//         try
//     {
//         Form resign("resign", 151, 10);
//     }
//     catch (std::exception &err){
//         std::cerr << err.what() << std::endl;
//     }
//     try
//     {
//         Form resign("resign", 10, 151);
//     }
//     catch (std::exception &err){
//         std::cerr << err.what() << std::endl;
//     }
// }

int main() {
    try {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        if (rrf) {
            std::cout << *rrf << std::endl;
            delete rrf;
        }
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }    

    return 0;
}