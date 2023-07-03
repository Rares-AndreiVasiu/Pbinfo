#include <iostream>
#include <cmath>

#define PI 3.14159265359

int n, aux;
double l, apotema, aria;

int main()
{
    std::cin >> n >> l;

    aux = n - 2;

    apotema = l / 2 * tan(PI * (aux) / 2 / n);

    aria = n * l * apotema / 2;

    aria *= 100;

    std::cout << int(aria / 100) << '.' << int(aria / 10) % 10 << int(aria) % 10;

    return 0;
}