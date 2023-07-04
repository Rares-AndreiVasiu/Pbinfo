#include <iostream>
using namespace std;

int main()
{
    int x, y, z, m, a, b;

    cin >> x >> y >> z;

    x = x * 100;

    y = y * 100;

    z = z * 100;

    m = (x + y + z) / 3;

    a = m / 100;

    cout << a << ".";

    b = m % 100;

    if ((b % 100) % 10 == 0)

        cout << "00";

    else

        cout << b;

    return 0;
}