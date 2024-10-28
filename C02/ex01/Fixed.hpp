/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:37:05 by pfalli            #+#    #+#             */
/*   Updated: 2024/10/28 16:58:59 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 #define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
    public:
		Fixed();
        Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &ex);
        Fixed &operator=(const Fixed &ex);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

    private:
        int _value;
        static const int _bits = 8;

};

// overload the << operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif