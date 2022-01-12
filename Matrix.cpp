#include "Matrix.h"
#include <iostream>

using namespace std;

int main()
{
  Matrix m;
  m.toString();

  Matrix w;
  w.toString();

  Matrix y = w;

  if(y == w)
    cout<<"Matrices are equal"<<endl;
  else
    cout<<"Matrices are not equal"<<endl;

  if(y == m)
    cout<<"Matrices are equals"<<endl;
  else
    cout<<"Matrices are not equal"<<endl;

  Matrix x = m*w;
  x.toString();

  return 0;
}
