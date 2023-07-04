#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int r;
double A, V, PI;

int main()
{
    cin >> r;

    PI = atan(1) * 4;

    A = 4 * PI * r * r;

    V = 4.0 / 3 * PI * r * r * r;

    cout << fixed << setprecision(2) << (long long)(A * 100) / 100.0 << " " 
         << fixed << setprecision(2) << (long long)(V * 100) / 100.0;


    return 0;

}