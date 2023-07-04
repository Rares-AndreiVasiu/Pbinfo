#include <iostream>
#include <cmath>
using namespace std;

float p, a, b, c, d, s;

int main()
{
    cin >> a >> b >> c >> d;

    p = (a + b + c + d) / 2;

    s = sqrt((p - a) * (p - b) * (p - c) * (p - d));

    s = s * 1000;

    cout << (int)s / 1000 << '.' << (int)s / 100 % 10 << (int)s / 10 % 10 << (int)s % 10;

    return 0;
}