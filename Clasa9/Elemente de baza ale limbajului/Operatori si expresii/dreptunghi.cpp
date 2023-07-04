#include <iostream>

using namespace std;

int main()
{
    int l, L, P, A, D;

    cin >> l >> L;

    P = 2 * (l + L);

    A = l * L;

    l = l * l;

    L = L * L;

    D = l + L;

    cout << P << " " << A << " " << D;

    return 0;
}