/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:38:44 by pfalli            #+#    #+#             */
/*   Updated: 2024/10/29 18:22:58 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//----------CONSTRUCTORS----------------------------------

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num){
	std::cout << "Int constructor called" << std::endl;
	this->_value = num;
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
	this->_value = num;
}

Fixed::Fixed(const Fixed& ex) : _value(ex._value)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

/* The assignment operator is used to copy the value from
	one object to another, and it is implemented by overloading the
	assignment operator (=).*/
Fixed &Fixed::operator=(const Fixed &ex)// assignment operator
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = ex._value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// --------FUNCTIONS------------------------------------------------

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return (this->_value);
}

int Fixed::toInt( void ) const
{
	int result = (int)roundf(this->_value);

	return result;
}

//  allowing custom objects to be printed directly using std::cout or other output streams
// With this overload, you can directly use std::cout << v1 to print a Vector object.
std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
    os << other.toFloat();
    return(os);
}