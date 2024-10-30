/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:31:25 by pfalli            #+#    #+#             */
/*   Updated: 2024/10/29 15:31:25 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Vector {
public:
    float x, y;

    Vector(float x = 0, float y = 0) : x(x), y(y) {}

    // Overload the + operator
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }
};

// Helper function for printing a vector
std::ostream& operator<<(std::ostream& os, const Vector& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

int main() {
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);
    Vector v3 = v1 + v2;  // Uses the overloaded + operator

    std::cout << "v1 + v2 = " << v3 << std::endl;  // Output: v1 + v2 = (4, 6)
    return 0;
}
