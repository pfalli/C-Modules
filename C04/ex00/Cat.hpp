#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {
	private:
	    std::string type;

	public:
	    Cat();
	    ~Cat();

		void makeSound() const; // override would be more readable and useful, but it's not mandatory
		std::string getType() const;
	
};

#endif
