#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;

    int n, n1;

    cin >> a;

    b = 3 * (pow(a, 2) + pow(a, 4));

    c = pow(a, 2) + pow(a, 4) + sqrt(pow(a, 2) + pow(a, 4));

    d = sqrt(pow(a, 2) + pow(a, 4));

    n1 = (b / c) + d;

    n = int(n1);

    cout << n;

    return 0;
}