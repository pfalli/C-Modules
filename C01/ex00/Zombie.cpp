/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:13:43 by pfalli            #+#    #+#             */
/*   Updated: 2024/10/22 12:13:43 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():name("Piero: "){ // Constructor
    std::cout << this->name << "Constructor" << std::endl;
}

Zombie::~Zombie() { // Deconstructor
    std::cout << "Decostructor" << std::endl;
}

void Zombie::announce( void ){ // fucntion
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}