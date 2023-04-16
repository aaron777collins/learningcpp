// stringstreams
#include <iostream> // iostream includes string
#include <string>
#include <sstream> // stringstream
using namespace std;

int main ()
{
  string mystr;
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price; //streams values from string to price (as float automatically) similar to >> directly
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*float(quantity) << endl;
  return 0;
}
