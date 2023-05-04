#include "Fraction.hpp"
#include <iostream>
namespace ariel
{
    Fraction::Fraction(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    Fraction& Fraction::operator++() 
    {
        return *this;
    }

    Fraction Fraction::operator++(int) 
    {
        return Fraction(2,3);
    }

    Fraction& Fraction::operator--() 
    {
        return *this;
    }

    Fraction Fraction::operator--(int) 
    {
        return Fraction(2,3);
    }

    Fraction operator+(const Fraction& f1,const Fraction& f2)
    {
        return f1;
    }

    Fraction operator-(const Fraction& f1,const Fraction& f2)
    {
        return f1;
    }

    Fraction operator*(const Fraction& f1,const Fraction& f2)
    {
        return f1;
    }
    Fraction operator/(const Fraction& f1,const Fraction& f2)
    {
        return f1;
    }

    bool operator==(const Fraction& f1,const Fraction& f2)
    {
        return true;
    }
    bool operator!=(const Fraction& f1,const Fraction& f2)
    {
        return true;
    }
    bool operator<(const Fraction& f1,const Fraction& f2)
    {
        return true;
    }
    bool operator>(const Fraction& fraction1,const Fraction& fraction2){
        return true;
    }
    bool operator<=(const Fraction& f1,const Fraction& f2)
    {
        return true;
    }
    bool operator>=(const Fraction& f1,const Fraction& f2)
    {
        return true;
    }

    std::ostream& operator<< (std::ostream& out, const Fraction& ch)
    {
        return out;
    }

    std::istream& operator>> (std::istream& in , Fraction& ch)
    {
        return in;
    }


}