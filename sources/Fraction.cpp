#include "Fraction.hpp"
#include <algorithm>
#include <cmath>
#include <limits>
using namespace ariel;
using namespace std;

Fraction::Fraction(int numerator, int denominator)
{
    this->numerator = 0;
    this->denominator = 0;
    
}

Fraction::Fraction(float num)
{
    this->numerator = 0;
    this->denominator = 0;
}

Fraction::Fraction()
{
    this->numerator = 0;
    this->denominator = 0;
}

int Fraction::getNumerator() const
{
    return 0;
}

int Fraction::getDenominator() const
{
    return 0;
}

void Fraction::over_flow_check(char temp, int num1, int num2, int num3) const
{

}

Fraction Fraction::operator+(const Fraction &temp) const
{
    return temp;
}

Fraction Fraction::operator-(const Fraction &temp) const
{
    return temp;
}

Fraction Fraction::operator*(const Fraction &temp) const
{
    return temp;
}

Fraction Fraction::operator/(const Fraction &temp) const
{
    return temp;
}

bool Fraction::operator>(const Fraction &temp) const
{
    return false;
}
bool Fraction::operator<(const Fraction &temp) const
{
    return false;
}

bool Fraction::operator>=(const Fraction &temp) const
{
    return false;
}

bool Fraction::operator<=(const Fraction &temp) const
{
    return false;
}

Fraction &Fraction::operator++()
{
    return *this;
}

const Fraction Fraction::operator++(int flag)
{
    return *this;
}

Fraction &Fraction::operator--()
{
    return *this;
}

const Fraction Fraction::operator--(int flag)
{
    return *this;
}



bool ariel::operator>(float num, const Fraction &fruction)
{
    return false;
}

bool ariel::operator>(const Fraction &fruction, float num)
{
    return false;
}

bool ariel::operator<(float num, const Fraction &fruction)
{
    return false;
}

bool ariel::operator<(const Fraction &fruction, float num)
{
    return false;
}

bool ariel::operator>=(float num, const Fraction &fruction)
{
    return false;
}

bool ariel::operator>=(const Fraction &fruction, float num)
{
    return false;
}

bool ariel::operator<=(float num, const Fraction &fruction)
{
    return false;
}

bool ariel::operator<=(const Fraction &fruction, float num)
{
    return false;
}

bool ariel::operator==(const Fraction &fruc1, const Fraction &fruc2)
{
    return false;
}

Fraction ariel::operator+(float num, const Fraction &fruction)
{
    return fruction;
}

Fraction ariel::operator+(const Fraction &fruction, float num)
{
    return fruction;
}

Fraction ariel::operator-(float num, const Fraction &fruction)
{
    return fruction;
}

Fraction ariel::operator-(const Fraction &fruction, float num)
{
    return fruction;
}

Fraction ariel::operator*(float num, const Fraction &fruction)
{
    return fruction;  
}

Fraction ariel::operator*(const Fraction &fruction, float num)
{
    return fruction;
}

Fraction ariel::operator/(float num, const Fraction &fruction)
{
    return fruction;
}

Fraction ariel::operator/(const Fraction &fruction, float num)
{
    return fruction;
}



ostream &ariel::operator<<(ostream &out, const Fraction &frac)
{
    return out;
}

istream &ariel::operator>>(istream &in, Fraction &frac)
{
    return in;
}