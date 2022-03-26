#include <iostream>
#include <vector>

#ifndef MONEY_HEADER
#define MONEY_HEADER

class Money
{
private:
	std::vector<int> m_value;

public:
	int getDollars() const;
	int getCents() const;
	bool operator <(const Money& m);
	bool operator >(const Money& m);
	bool operator <=(const Money& m);
	bool operator >=(const Money& m);
	bool operator !=(const Money& m);
	bool operator ==(const Money& m);
	Money operator +(const Money& m);
	Money operator -(const Money& m);
	explicit Money(const int dollars, const int cents);
	explicit Money();
	virtual ~Money();

};
std::ostream& operator <<(std::ostream& os, const Money& m);



// std::ostream& os,

#endif 
