#include "Brain.hpp"

Brain::Brain() {
    size = 0;
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {{
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}}


Brain &Brain::operator=(const Brain &other) {{
    std::cout << "Assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
		this->idea[i] = other.idea[i];
	this->size = other.size;
	return (*this);
    
}}

Brain::~Brain() {
    std::cout << "Default destructor called" << std::endl;
    delete [] (this->idea);
    return ;
}

//-----------------------------------------------------
//               FUNCTIONS
//----------------------------------------------------

std::string Brain::getIdea(unsigned int index) const
{
	return (this->idea[index]);
}

void Brain::addIdea(std::string idea)
{
	// if (size == 100)
	// 	return;
	this->idea[size++] = idea;
}