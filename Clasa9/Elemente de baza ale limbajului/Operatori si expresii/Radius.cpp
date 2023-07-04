#include <iostream>
#include <cmath>
using namespace std;

float a, n, pi = 3.14159265359;

int main()
{
    cin >> n >> a;

    float radius = a / (2.00 * sin(pi / n));

    radius *= 100;

    cout << (int)radius / 100 << '.' << (int)radius / 10 % 10 << (int)radius % 10;

    return 0;
}