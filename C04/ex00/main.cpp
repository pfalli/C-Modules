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

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog(); // polymorphism, it uses the pointer to point to a derived class
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " <<  std::endl; // so the j->getType() will call the overridden methods in the Dog class.
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); // cat sound
//     j->makeSound(); // dog sound
//     meta->makeSound();

//     delete meta;
//     delete j;
//     delete i;
//     return 0;
// }

int main() {
    const WrongAnimal* elephant = new WrongAnimal();
    const WrongAnimal* mouse = new WrongCat();

    std::cout << elephant->getType() << " " <<  std::endl;
    std::cout << mouse->getType() << " " <<  std::endl;
    elephant->makeSound();
    mouse->makeSound();

    delete elephant;
    delete mouse;

    return 0;

}