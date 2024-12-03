#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	private:
	    std::string *idea;
		int size;

	public:
	    Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
	    ~Brain();

		std::string getIdea(unsigned int index) const;
		void addIdea(std::string idea);
};

#endif //
