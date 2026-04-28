#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
class Point
{
	public:
		Point();
		Point(const Point& src);
		Point(float x, float y);
		Point& operator=(const Point& src);
		~Point();
		Fixed getX(void) const;
		Fixed getY(void) const;
	private:
		Fixed const x;
		Fixed const y;

};

#endif