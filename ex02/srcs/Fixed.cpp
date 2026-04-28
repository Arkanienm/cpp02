#include "../includes/Fixed.hpp"
const int Fixed::bits;

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << this->bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(n * (1 << this->bits));
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->value = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->value) / static_cast<float>(1 << this->bits);
}

int Fixed::toInt(void) const
{
	return this->value >> this->bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed& src) const
{
	return this->value > src.getRawBits();
}

bool Fixed::operator<(const Fixed& src) const
{
	return this->value < src.getRawBits();
}

bool Fixed::operator>=(const Fixed& src) const
{
	return this->value >= src.getRawBits();
}

bool Fixed::operator<=(const Fixed& src) const
{
	return this->value <= src.getRawBits();
}

bool Fixed::operator==(const Fixed& src) const
{
	return this->value == src.getRawBits();
}

bool Fixed::operator!=(const Fixed& src) const
{
	return this->value != src.getRawBits();
}

Fixed Fixed::operator+(const Fixed& src) const
{
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(const Fixed& src) const
{
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(const Fixed& src) const
{
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(const Fixed& src) const
{
	return Fixed(this->toFloat() / src.toFloat());
}

Fixed& Fixed::operator++(void)
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->value++;
	return tmp;
}

Fixed& Fixed::operator--(void)
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->value--;
	return tmp;

}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	return (f1.value < f2.value) ? f1 : f2;
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	return (f1.value > f2.value) ? f1 : f2;
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return (f1.value > f2.value) ? f1 : f2;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	return (f1.value < f2.value) ? f1 : f2;
}