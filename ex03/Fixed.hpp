#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed(const int n);
		Fixed(const float n);
		Fixed& operator=(const Fixed& src);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator>(const Fixed& src) const;
		bool operator<(const Fixed& src) const;
		bool operator>=(const Fixed& src) const;
		bool operator<=(const Fixed& src) const;
		bool operator==(const Fixed& src) const;
		bool operator!=(const Fixed& src) const;


		Fixed operator+(const Fixed& src) const;
		Fixed operator-(const Fixed& src) const;
		Fixed operator*(const Fixed& src) const;
		Fixed operator/(const Fixed& src) const;

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		static Fixed& min(Fixed& f1, Fixed& f2);
		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static Fixed& max(Fixed& f1, Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif