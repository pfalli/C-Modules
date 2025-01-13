#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

	public:
	    Intern();
		Intern(const Intern& other);
        Intern &operator=(const Intern &other);
	    ~Intern();

		Form* makeForm(std::string name, std::string target);
	
};

#endif // INTERN_HPP
