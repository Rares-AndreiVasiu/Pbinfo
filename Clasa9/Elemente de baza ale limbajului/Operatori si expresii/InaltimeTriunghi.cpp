#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x;

    int c1, c2, i;

    cin >> c1 >> c2 >> i;

    x = (float)c1 * c2 / i;

    x *= 100;

    int a = int(x);

    int b = a / 100;

    int c = a % 100;

    cout << b << "." << c;

    return 0;
}