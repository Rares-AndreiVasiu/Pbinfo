#include <iostream>

using namespace std;

int main()
{
    int h1, h2, m1, m2, x;

    cin >> h1 >> m1 >> x;

    m2 = h1 * 60 + m1 + x;

    m2 = m2 % 1440;

    h2 = m2 / 60;

    m1 = m2 % 60;

    cout << h2 << " " << m1;

    return 0;
}