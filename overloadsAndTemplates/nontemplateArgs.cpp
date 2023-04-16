// template arguments
#include <iostream>

template <class T, int N>
T fixed_multiply(T val)
{
    return val * N; // n is included in the template args below
}

int main()
{
    std::cout << fixed_multiply<int, 2>(10) << '\n';
    std::cout << fixed_multiply<int, 3>(10) << '\n';
    return 0;
}
