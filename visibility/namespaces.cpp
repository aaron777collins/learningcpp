// namespaces
#include <iostream>
using namespace std;

namespace foo // creates a new namespace
{
  int value() { return 5; }
}

namespace bar // creates a new namespace
{
  const double pi = 3.1416;
  double value() { return 2*pi; }
}

int main () { // main is in global namespace
    // foo::value() and bar::value() are in their respective namespaces
  cout << foo::value() << '\n';
  cout << bar::value() << '\n';
  // bar::pi is in the bar namespace
  cout << bar::pi << '\n';
  return 0;
}
