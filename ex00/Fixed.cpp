#include "Fixed.hpp"

Fixed::Fixed() : bits( = 8)
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy Constructor called" << std::endl;
}

Fixed::Fixed& operator=(const Fixed& src)
{
	std::cout << "Assignement operato called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}