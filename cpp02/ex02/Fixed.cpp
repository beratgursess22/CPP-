/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:29:22 by igurses           #+#    #+#             */
/*   Updated: 2025/10/29 15:34:57 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    this->pointValue = 0;
}

Fixed::Fixed(const int intValue)
{
    this->pointValue = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
    this->pointValue = (roundf(floatValue * (1 << fractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
    this->pointValue = other.getRawBits();
}
Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->pointValue = other.getRawBits();
    return *this;
}

Fixed::~Fixed(){}

int  Fixed::getRawBits() const
{
    return this->pointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->pointValue = raw;
}
float Fixed::toFloat() const
{
    return (float)(this->pointValue) / (1 << fractionalBits);
}

int Fixed:: toInt() const
{
    return this->pointValue >> fractionalBits;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->pointValue > other.pointValue;
}


bool Fixed::operator<(const Fixed &other) const
{
    return this->pointValue < other.pointValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->pointValue >= other.pointValue;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->pointValue <= other.pointValue;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->pointValue == other.pointValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->pointValue != other.pointValue;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() * other.getRawBits() / (1 << fractionalBits));
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() / other.getRawBits() * (1 << fractionalBits));
    return result;
}

Fixed& Fixed::operator++()       
{
    this->pointValue++;
    return *this;
}

Fixed Fixed::operator++(int)        
{
    Fixed temp = *this;

    this->pointValue++;
    return temp;
}

Fixed& Fixed::operator--()          
{
    this->pointValue--;
    return *this;
}

Fixed Fixed::operator--(int)          
{
    Fixed temp = *this;
    this->pointValue--;
    return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}


Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}


const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}


