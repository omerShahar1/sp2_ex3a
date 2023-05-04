#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace ariel;

TEST_CASE("") 
{
    CHECK_NOTHROW(Fraction(1,0));
    CHECK_NOTHROW(Fraction(2,0));
    CHECK_NOTHROW(Fraction(3,0));
    CHECK_NOTHROW(Fraction(4,0));
    CHECK_NOTHROW(Fraction(5,0));
    CHECK_NOTHROW(Fraction(6,0));
    CHECK_NOTHROW(Fraction(7,0));
    CHECK_NOTHROW(Fraction(8,0));
    CHECK_NOTHROW(Fraction(9,0));
    CHECK_NOTHROW(Fraction(10,0));
    CHECK_NOTHROW(Fraction(1,1));
    CHECK_NOTHROW(Fraction(2,2));
    CHECK_NOTHROW(Fraction(3,3));
    CHECK_NOTHROW(Fraction(4,4));
    CHECK_NOTHROW(Fraction(5,5));
    CHECK_NOTHROW(Fraction(6,6));
    CHECK_NOTHROW(Fraction(7,7));
    CHECK_NOTHROW(Fraction(8,8));
    CHECK_NOTHROW(Fraction(9,9));
    CHECK_NOTHROW(Fraction(10,10));

}

