#include <iostream>
#define ll long long

ll s;

int a, b, c;

ll suma(int a, int b)
{
    int r = 1, prim_termen = a, ultim_termen = b, numar_elemente = b - a + 1;

    return ((prim_termen + ultim_termen) * numar_elemente) / 2;
}

int main()
{
    std::cin >> a >> b >> c;

    std::cout << suma(a, b) << ' ' << suma(b, c) << ' ' << suma(a, c);

    return 0;
}