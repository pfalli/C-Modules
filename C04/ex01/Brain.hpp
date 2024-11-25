#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	protected:
	    std::string ideas[100];

	public:
	    Brain();
	    virtual ~Brain();

		void new_idea(std::string idea);
};

#endif //
