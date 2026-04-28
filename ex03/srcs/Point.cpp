#include "../includes/Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(float x, float y) : x(x), y(y)
{
}
Point::Point(const Point& src) : x(src.x), y(src.y)
{
}

Point::~Point()
{
}

Fixed Point::getX(void) const
{
	return this->x;
}

Fixed Point::getY(void) const
{
	return this->y;
}

Point& Point::operator=(const Point& src)
{
	if (this != &src)
	{
		const_cast<Fixed&>(this->x) = src.getX();
		const_cast<Fixed&>(this->y) = src.getY();
	}
	return *this;
}