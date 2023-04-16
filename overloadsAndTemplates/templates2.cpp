// function templates
#include <iostream>
using namespace std;

template <class T, class U> // T and U are the template types of the arguments (this is like generic types in Java)
bool are_equal(T a, U b)
{
    return (a == b);
}

int main()
{
    if (are_equal(10, 10.0)) // T is int, U is double since they are literals. The compiler knows this so we don't need to specift the types.
    {

        cout << "x and y are equal\n";
    }
    else
    {
        cout << "x and y are not equal\n";
    }

    // likewise, we can specify the types of the arguments:
    if (are_equal<int, double>(10, 10.0))
        cout << "x and y are equal\n";
    else
        cout << "x and y are not equal\n";
    return 0;
}
