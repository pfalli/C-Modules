/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:29:48 by pfalli            #+#    #+#             */
/*   Updated: 2024/10/17 16:29:48 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

bool isNumber(const char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

int main(int ac, char **av){
	if (ac == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	if (ac != 2){
		std::cout << "megaphone takes only one parameter." << std::endl;
		return 0;
	}
	const char* input = av[1];
	if (isNumber(input)) {
		std::cout << "Parameter is a number: " << input << std::endl;
	} else {
		for (int i = 0; input[i] != '\0'; i++){
			std::cout << (char)std::toupper(input[i]);
		}
		std::cout << std::endl;
	}
	return 0;
}