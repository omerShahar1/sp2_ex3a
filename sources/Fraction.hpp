#pragma once
#include <iostream>

namespace ariel
{
    class Fraction
    {
        private:
            int num1, num2;
        
        public:
            Fraction(int, int);
            Fraction& operator++();
            Fraction operator++(int);
            Fraction& operator--();
            Fraction operator--(int);
            friend Fraction operator+(const Fraction &,const Fraction &);
            friend Fraction operator-(const Fraction &,const Fraction &);
            friend Fraction operator*(const Fraction &,const Fraction &);
            friend Fraction operator/(const Fraction &,const Fraction &);
            friend bool operator==(const Fraction &,const Fraction &);
            friend bool operator!=(const Fraction &,const Fraction &);
            friend bool operator<(const Fraction &,const Fraction &);
            friend bool operator>(const Fraction &,const Fraction &);
            friend bool operator<=(const Fraction &,const Fraction &);
            friend bool operator>=(const Fraction &,const Fraction &);
            friend std::ostream& operator<< (std::ostream&, const Fraction&);
            friend std::istream& operator>> (std::istream&, Fraction&);
    };
}