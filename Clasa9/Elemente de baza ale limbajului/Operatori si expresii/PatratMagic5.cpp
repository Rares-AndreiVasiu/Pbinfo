#include <iostream>

long long ConstantMagicSquare, n;

int main()
{
    std::cin >> n;

    ConstantMagicSquare = n * (n * n + 1) / 2;

    std::cout << ConstantMagicSquare;

    return 0;
}