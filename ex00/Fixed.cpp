#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Constructor called" << std::endl; [cite: 480]
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy Constructor called" << std::endl; [cite: 481]
	*this = src;
}

Fixed::Fixed& operator=(const Fixed& src)
{
	std::cout << "Assignement operato called" << std::endl; [cite: 484]
	if (this == &src)
		this->value = src.getRawBits()
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl; [cite: 492]
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl; [cite: 482]
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}