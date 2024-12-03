#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		std::string type;
		Brain	*brain;

	public:
	    Dog();
		Dog(const Dog& other);
        Dog &operator=(const Dog &other);
	    ~Dog();

		void makeSound() const; // override would be more readable and useful, but it's not mandatory
	    std::string getType() const;
		Brain	*getBrain(void) const;
	
};

#endif //
