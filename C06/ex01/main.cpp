#include <iostream>
#include <string>
#include <cstdint>
#include "Serializer.hpp"

// i need more tests

int main()
{
	Data case1;
	uintptr_t tmp;

	case1.num = 10;
	case1.str = "42Wolfsburg";

	tmp = Serializer::serialize(&case1);
	Data *case2 = Serializer::deserialize(tmp);

	std::cout << &case1 << std::endl;
	std::cout << case2 << std::endl;

	std::cout << case1.num << std::endl;
	case1.num = 15;
	std::cout << case1.num << std::endl;

	return (0);
}