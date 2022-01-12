#include <iostream>
#include <stdlib.h>

using namespace std;

class Matrix
{
  public:

    int myArray[3][3];

    Matrix();

    void toString();

    Matrix operator*(const Matrix& a) const;

    bool operator==(const Matrix& a) const;
};
