// my first string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystring;
    mystring = "This is the initial string content";
    cout << mystring << endl;
    string mystring2("This is a different string content");
    cout << mystring2 << endl;
    string mystring3{"aaa\aaaa"};
    cout << mystring3 << endl;
    string mystring4 = "this"
                       "forms a"
                       "single string";
    cout << mystring4 << endl;
    string mystring5 = "this is also a single \
string";
    cout << mystring5 << endl;
    return 0;
}
