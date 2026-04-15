#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H


class Fixed
{
	private:
		int value;
		static const int bits;
	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& src);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

};


#endif //CPP02_FIXED_H