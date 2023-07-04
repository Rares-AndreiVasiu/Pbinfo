#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double a, b, angle;

double cal_cos(double n)
{
    float accuracy = 0.000001, x1, denominator, cosx, cosval;

    // din grade in radiani
    n = n * (3.14159265 / 180.000000);

    x1 = 1;

    cosx = x1;

    cosval = cos(n);

    int i = 1;

    do
    {
        denominator = 2 * i * (2 * i - 1);

        x1 = -x1 * n * n / denominator;

        cosx += x1;

        i++;
    } while (accuracy <= fabs(cosval - cosx));

    return cosx;
}

double thirdEdge(double a, double b, double c)
{
    double angle = cal_cos(c);

    return sqrt((a * a) + (b * b) - 2 * a * b * angle);
}

int main()
{
    cin >> a >> b >> angle;

    cout << fixed << setprecision(2) << thirdEdge(a, b, angle);

    return 0;
}