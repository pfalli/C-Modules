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

int main(int ac, char **av){
    if (ac == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    if (ac != 2){
        std::cout << "megaphone takes only one parameter." << std::endl;
        return(0);
    }
    for (int i = 0; av[1][i]; i++){
        std::cout << (char)toupper(av[1][i]);
    }
    std::cout << std::endl;
    return (0);
}
