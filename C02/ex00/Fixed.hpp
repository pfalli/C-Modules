/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:37:05 by pfalli            #+#    #+#             */
/*   Updated: 2024/10/25 17:37:05 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED.HPP
    #define FIXED.HPP

#include <iostream>
#include <string>

class Fixed{
    public:
        Fixed();
        Fixed(const Fixed& ex);
        Fixed &operator=(const Fixed& e);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int _fixedPoint;
        static const int _fractionalBits;

};

#endif