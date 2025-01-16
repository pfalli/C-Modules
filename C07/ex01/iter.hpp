#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename anytype>
void iter(anytype *array, int length, void (*function)(anytype &)) { // why *ptr
	for (int i = 0; i < length; i++) {
		function(array[i]);
	}
}

template <typename anytype>
void function(anytype &array) { // why &
	std::cout << array << std::endl;
}

#endif //
