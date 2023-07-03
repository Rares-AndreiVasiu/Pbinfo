#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n, i, a;

    cin >> a;

    for (i = 1; i <= 16; i++)
        n = pow(a, i);

    cout << n;

    return 0;
}