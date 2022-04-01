#include <iostream>
#include <vector>

using namespace std;

namespace zich
{
    class Matrix
    {
    public:
        vector<vector<double>> mat;

        Matrix(vector<double>, int, int);
        Matrix operator + (Matrix const &temp); // A + B
        Matrix operator + (); // +A

        Matrix operator - (Matrix const &temp); // A - B
        Matrix operator - (); // -B

        void operator += (Matrix const &temp); // A += B
        void operator -= (Matrix const &temp); // A -= B

        bool operator == (Matrix const &temp); // A == B
        bool operator >= (Matrix const &temp); // A >= B
        bool operator <= (Matrix const &temp); // A <= B
        bool operator < (Matrix const &temp); // A < B
        bool operator > (Matrix const &temp); // A > B
        bool operator != (Matrix const &temp); // A != B

        void operator -- ();  // --A
        void operator ++ ();  // ++A
        void operator -- (int);  //  A--
        void operator ++ (int);  //  A++
        
        Matrix operator * (Matrix const &temp); // A * B
        Matrix operator * (double); // A * 3
        void operator *= (Matrix const &temp); // A *= B
        void operator *= (double); // A *= 3

        friend ostream &operator << (ostream &output, const Matrix &temp);
        friend istream &operator >> (istream &input, const Matrix &temp);
    };
    
    Matrix operator * (double, Matrix const &temp); // 3 * A
}