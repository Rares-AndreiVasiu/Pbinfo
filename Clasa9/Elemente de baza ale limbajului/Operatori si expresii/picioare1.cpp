#include <iostream>

using namespace std;

int main()
{
    int oi, gaini, c, p;

    cin >> c >> p;

    if (c * 4 < p || c * 2 > p || p == 1)
    {
        return 0;
    }
    else
        oi = c;

    gaini = (c * 4 - p) / 2;

    oi = oi - gaini;

    cout << gaini << " " << oi;

    return 0;
}
