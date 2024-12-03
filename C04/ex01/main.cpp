/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:20:07 by pfalli            #+#    #+#             */
/*   Updated: 2024/11/20 12:20:07 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* animal[8];
    Brain* brain;

    for (int i = 0; i < 8; ++i) {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
        std::cout << std::endl;
    }

    // brain = animal[2]->getBrain(); // so now the Animal(Dog) has a Brain in which to store Ideas
    brain->addIdea("I'm hungry");
    brain->addIdea("Hello");
    brain->addIdea("ahah");
    // std::cout << "First idea of animal[2]: " << animal[3]->getBrain()->getIdea(2) << std::endl;

  
    //----------------------------------------------------------------------------------------------------
    for (int i = 0; i < 8; ++i) {
        delete animal[i];
    }

    return 0;
}