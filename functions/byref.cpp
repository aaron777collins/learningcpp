// passing parameters by reference
#include <iostream>
using namespace std;

// takes the arguments by reference
void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}

// takes the arguments by pointer
void duplicatePtr (int* a, int* b, int* c)
{
  *a*=2; // dereference the pointer and multiple by 2 and assign
  *b*=2;
  *c*=2;
}

// takes the arguments by value
void notDuplicate (int a, int b, int c)
{
  a*=2;
  b*=2;
  c*=2;
}

int main ()
{
  int x=1, y=3, z=7;
  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
  cout << "by reference" << endl;
  duplicate (x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
  cout << "by pointer" << endl;
  duplicatePtr (&x, &y, &z);
  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
  cout << "by value" << endl;
  notDuplicate(x, y, z); // this function just takes the values and multiplies without changing the values
  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
  return 0;
}
