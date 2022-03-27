#include "Money.h"
#include <iostream>
#include <vector>

Money::Money()
{
    m_value.push_back(0);
    m_value.push_back(0);
}

Money::Money(const int dollars, const int cents)
{
    m_value.push_back(dollars+cents/100);
    m_value.push_back(cents%100);
}

int Money::getDollars() const
{
    return m_value.at(0);
}

int Money::getCents() const
{
    return m_value.at(1);
}

bool Money::operator <(const Money& m)
{
    if (this->getDollars() < m.getDollars())
    {
        return true;
    }
    else
    {
        if ((this->getDollars() == m.getDollars()) && (this->getCents() < m.getCents()))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool Money::operator >(const Money& m)
{
    if (this->getDollars() > m.getDollars())
    {
        return true;
    }
    else
    {
        if ((this->getDollars() == m.getDollars()) && (this->getCents() > m.getCents()))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool Money::operator <=(const Money& m)
{
    if ( (*this < m) || (*this == m) )
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Money::operator >=(const Money& m)
{
    if ((*this > m) || (*this == m))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Money::operator !=(const Money& m)
{
    if ((this->getDollars() == m.getDollars()) && (this->getCents() == m.getCents()) )
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Money::operator ==(const Money& m)
{
    if ((this->getDollars() == m.getDollars()) && (this->getCents() == m.getCents()) )
    {
        return true;
    }
    else
    {
        return false;
    }
}

Money Money::operator +(const Money& m)
{
    int dollars, cents = 0;
    dollars = this->getDollars() + m.getDollars();
    cents = this->getCents() + m.getCents();

    if (cents >= 100)
    {
        dollars++;
        cents -= 100;
    }

    Money n(dollars, cents);
    return n;
}

Money Money::operator -(const Money& m)
{
    int dollars, cents = 0;
    dollars = this->getDollars() - m.getDollars();
    cents = this->getCents() - m.getCents();

    if (cents < 0)
    {
        dollars--;
        cents += 100;
    }

    Money n(dollars, cents);
    return n;
}

std::ostream& operator <<(std::ostream& os, const Money& m)
{
    os << "$" << m.getDollars() << "." << m.getCents() << std::endl;
    return os;
}

Money::~Money () {}