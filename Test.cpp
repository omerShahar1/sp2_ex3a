#include <iostream>
#include <vector>
#include "doctest.h"
#include "Matrix.hpp"

using namespace std;
using namespace zich;


TEST_CASE("constructor")
{
    vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    CHECK_THROWS(Matrix a = Matrix(identity, 2, 3));
    CHECK_THROWS(Matrix a = Matrix(identity, 3, 2));
    CHECK_THROWS(Matrix a = Matrix(identity, 2, 2));
    CHECK_NOTHROW(Matrix a = Matrix(identity, 3, 3));
}

TEST_CASE("add two matrixes") // check A+B and A+=B
{
    vector<double> arr1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    vector<double> arr2 = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    vector<double> arr3 = {3, 0, 0};
    Matrix a = Matrix(arr1, 3, 3);
    Matrix b = Matrix(arr2, 3, 3);
    Matrix c = Matrix(arr3, 1, 3);

    CHECK_THROWS(a+c);
    CHECK_THROWS(b+c);
    
    Matrix d = a+b;
    
    CHECK_THROWS(d+c);
    CHECK_NOTHROW(d+a);
    CHECK_NOTHROW(d+b);
    
    size_t i=0;
    size_t j=0;
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            CHECK(d.mat[i][j] == a.mat[i][j] + b.mat[i][j]);
        }
    }
    CHECK_NOTHROW(a+=b);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            CHECK(d.mat[i][j] != a.mat[i][j] + b.mat[i][j]);
        }
    }

}

TEST_CASE("unary positive matrix") // check +A
{
    vector<double> arr1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix a = Matrix(arr1, 3, 3);
    Matrix b = +a;

    size_t i=0;
    size_t j=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            CHECK(a.mat[i][j] == b.mat[i][j]);
        }
    }

}

TEST_CASE("sub two matrixes")   // check A-B and A-=B
{
    vector<double> arr1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    vector<double> arr2 = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    vector<double> arr3 = {3, 0, 0};
    Matrix a = Matrix(arr1, 3, 3);
    Matrix b = Matrix(arr2, 3, 3);
    Matrix c = Matrix(arr3, 1, 3);

    CHECK_THROWS(a-c);
    CHECK_THROWS(b-c);
    
    Matrix d = a-b;
    
    CHECK_THROWS(d-c);
    CHECK_NOTHROW(d-a);
    CHECK_NOTHROW(d-b);
    
    size_t i=0;
    size_t j=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            CHECK(d.mat[i][j] == a.mat[i][j] - b.mat[i][j]);
        }
    }
    CHECK_NOTHROW(a-=b);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            CHECK(d.mat[i][j] != a.mat[i][j] - b.mat[i][j]);
        }
    }

}

TEST_CASE("unary negative matrix") // check -A
{
    vector<double> arr1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix a = Matrix(arr1, 3, 3);
    Matrix b = -a;

    size_t i=0;
    size_t j=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            CHECK(a.mat[i][j] == (-1) * b.mat[i][j]);
        }
    }

}

TEST_CASE("check boolean operators") // check A==B, A!=B, A<=B...
{
    vector<double> arr1 = {0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<double> arr2 = {0, 0, 0, 0, 0, 0, 0, 0, 2};
    vector<double> arr3 = {1, 0, 0, 0, 0, 0, 0, 0, 0};
    Matrix a = Matrix(arr1, 3, 3);
    Matrix b = Matrix(arr2, 3, 3);
    Matrix c = Matrix(arr3, 3, 3);

    CHECK((a!=b) == true);
    CHECK((a==c) == true);
    CHECK((a!=b) == true);
    CHECK((a<b) == true);
    CHECK((a<=b) == true);
    CHECK((a<=c) == true);
    CHECK((c<=b) == true);
    CHECK((c<b) == true);
}

TEST_CASE("check ++ and --")
{
    vector<double> arr1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<double> arr2 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    Matrix a = Matrix(arr1, 3, 3);
    Matrix b = Matrix(arr2, 3, 3);

    a--;

    size_t i=0;
    size_t j=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            CHECK(a.mat[i][j] == b.mat[i][j] - 1);
        }
    }

    b++;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            CHECK(a.mat[i][j] == b.mat[i][j] - 2);
        }
    }
}

TEST_CASE("multiplication")
{
    vector<double> arr1 = {1, 1, 1, 1, 1, 1, 1, 1, 0};
    vector<double> arr2 = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<double> arr3 = {0, 1, 1, 1, 1, 1, 1, 1, 0};
    
    Matrix a = Matrix(arr1, 3, 3);
    Matrix b = Matrix(arr2, 3, 3);
    Matrix test = Matrix(arr3, 3, 3);

    test *= 3;
    CHECK((test > a) == true);

    test *= b;
    CHECK((test < a) == true);
    
}

TEST_CASE("input and output")
{
    vector<double> arr1 = {1, 1, 1, 1, 1, 1, 1, 1, 0};
    vector<double> arr2 = {0, 1, 1, 1, 1, 1, 1, 1, 1};
    
    Matrix a = Matrix(arr1, 3, 3);
    Matrix b = Matrix(arr2, 3, 3);

    CHECK_NOTHROW(cout << a << b << endl);
}
