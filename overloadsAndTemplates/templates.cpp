// function template
#include <iostream>
using namespace std;

template <class someTemp> // someTemp is a placeholder for a type. It could be any type and named anything. T would work too.
someTemp sum (someTemp a, someTemp b)
{
  someTemp result;
  result = a + b;
  return result;
}

int main () {
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j); // in this case where the type is known, the template can be instiated without the <int> part.
  h=sum<double>(f,g); // same here
  cout << k << '\n';
  cout << h << '\n';
  return 0;
}
