#include <iostream>
#include <vector>
#include "Matrix.hpp"

using namespace std;

namespace zich
{
    Matrix::Matrix(vector<double> arr, int length, int width)
    {
        if(length<=0 || width<=0)
        {
            throw invalid_argument("arguments need to be positive");
        }
        if(arr.size() != length*width)
        {
            throw invalid_argument("arr size is not in line with the length and width arguments");
        }

        mat = vector<vector<double>>((size_t)length, vector<double>((size_t)width, 0.0));
        size_t i=0;
        size_t j=0;
        size_t k=0;

        for(i=0; i<length; i++)
        {
            for(j=0; j<width; j++)
            {
                mat[i][j] = arr[k++];
            }
        }
    }

    Matrix Matrix::operator + (Matrix const &temp)
    {
        vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        return Matrix(identity, 3, 3);
    }
    Matrix Matrix::operator + ()
    {
        vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        return Matrix(identity, 3, 3);
    }

    Matrix Matrix::operator - (Matrix const &temp)
    {
        vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        return Matrix(identity, 3, 3);
    }
    Matrix Matrix::operator - ()
    {
        vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        return Matrix(identity, 3, 3);
    }

    void Matrix::operator += (Matrix const &temp)
    {
    }
    void Matrix::operator -= (Matrix const &temp)
    {
    }
    bool Matrix::operator == (Matrix const &temp)
    {
        return false;
    }
    bool Matrix::operator >= (Matrix const &temp)
    {
        return false;
    }
    bool Matrix::operator <= (Matrix const &temp)
    {
        return false;
    }
    bool Matrix::operator < (Matrix const &temp)
    {
        return false;
    }
    bool Matrix::operator > (Matrix const &temp)
    {
        return false;
    }
    bool Matrix::operator != (Matrix const &temp)
    {
        return false;
    }
    void Matrix::operator -- ()  // --x
    {
    }
    void Matrix::operator ++ ()  // ++x
    {
    }
    void Matrix::operator -- (int)  //  x--
    {
    }
    void Matrix::operator ++ (int)  //  x++
    {
    }
    Matrix operator * (Matrix const &temp)
    {
        vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        return Matrix(identity, 3, 3);
    }
    Matrix Matrix::operator * (double num)
    {
        vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        return Matrix(identity, 3, 3);
    }
    void Matrix::operator *= (Matrix const &temp)
    {
    }
    void Matrix::operator *= (double num)
    {
    }
    
    ostream &operator << (ostream &output, const Matrix &temp)
    {
        output << "test " << endl;
        return output;
    }
    istream &operator >> (istream &input, const Matrix &temp)
    {
        return input;    
    }

    Matrix operator * (double num, Matrix const &temp)
    {
        vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        return Matrix(identity, 3, 3);
    }
}