#include <bits/stdc++.h>

using namespace std;

double n;

int main()
{
    cin >> n;

    printf("%.6f", n * n * atan(1) * 4);

    cout << " ";

    printf("%.6f", n * 2 * atan(1) * 4);

    return 0;
}