#include <iostream>
#include <algorithm>

int n, suma, a, b, c;

int main()
{
    std::cin >> n;

    a = (n / 100) % 10;

    b = (n / 10) % 10;

    c = n % 10;

    suma += (a * 100 + b * 10 + c);
    suma += (a * 100 + c * 10 + b);
    suma += (b * 100 + a * 10 + c);
    suma += (b * 100 + c * 10 + a);
    suma += (c * 100 + a * 10 + b);
    suma += (c * 100 + b * 10 + a);

    std::cout << suma;

    return 0;
}