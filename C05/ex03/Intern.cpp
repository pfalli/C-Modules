#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Default constructor called" << std::endl;
    return ;
}


Intern::Intern(const Intern &other) {
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}


Intern &Intern::operator=(const Intern &other) {
    std::cout << "Assignment operator called" << std::endl;
    if (this == &other)
		return *this;
	return *this;
}


Intern::~Intern() {
    std::cout << "Default destructor called" << std::endl;
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------

Form* Intern::makeForm(std::string name, std::string target ) {
    std::string formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    Form *forms[] = {
        new RobotomyRequestForm(target),
        new ShrubberyCreationForm(target),
        new PresidentialPardonForm(target)
    };

    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << formNames[i] << std::endl;
            return forms[i];
        }
    }

    std::cout << "Intern cannot create the form " << name << std::endl;
    return NULL;
}