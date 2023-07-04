#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double p, d1, d2, a, nr;

    cin >> d1 >> d2;

    d1 = d1 / 2;

    d2 = d2 / 2;

    nr = d1 * d1 + d2 * d2;

    a = ((d1 + d1) * (d2 + d2)) / 2;

    cout << setprecision(6) << 4 * (sqrt(nr)) << " ";

    cout << a;

    return 0;
}