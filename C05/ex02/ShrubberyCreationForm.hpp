#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	private:
	    std::string _target;

	public:
	    ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	    ~ShrubberyCreationForm();

		void execute( const Bureaucrat& executor ) const;
	
};

#endif //
