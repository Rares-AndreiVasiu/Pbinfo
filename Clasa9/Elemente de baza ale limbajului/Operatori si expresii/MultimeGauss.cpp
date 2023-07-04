#include <iostream>
#include <cmath>
using namespace std;

long long n, m, delta;

int main()
{
    cin >> n;

    delta = sqrt(1 + 8 * (n - 1));

    m = (1 + delta) / 2;

    cout << m;

    return 0;
}