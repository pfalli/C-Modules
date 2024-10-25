/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:05:24 by pfalli            #+#    #+#             */
/*   Updated: 2024/10/25 11:05:24 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){

}

Harl::~Harl(){

}

void Harl::complain(std::string level){
    void (Harl::*funcPtr[4])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++ ;
    if (i < 4)
        (this->*funcPtr[i])();
    else
        std::cout << "Invalid level" << std::endl;
}

void Harl::_debug(){
    std::cout << "debuggg called" <<std::endl;
}

void Harl::_info(){
    std::cout << "infooo called" << std::endl;
}

void Harl::_warning(){
    std::cout << "warning called" << std::endl;
}

void Harl::_error(){
    std::cout << "error called" << std::endl;
}