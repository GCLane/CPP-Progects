#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(){
  int num;
  for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          num = rand() % 10;
          myArray[i][j] = num;
        }
    }
}

void Matrix::toString(){
  cout<<"Printing Matrix: "<<endl;
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      cout<<myArray[i][j]<<" ";
    }
    cout<<endl;
  }
}

Matrix Matrix::operator*(const Matrix& a) const{
    Matrix temp;

    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; i++)
        for (int x = 0; x < 3; x++)
            temp.myArray[i][j] += myArray[j][x] * a.myArray[x][j];

    return temp;
}

bool Matrix::operator==(const Matrix& a) const{
  bool equal = true;
  int counter = 0;
    for(int i = 0; equal && i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
      {
        equal = myArray[i][j] == a.myArray[i][j];
      }
    }
  return equal;
  }
