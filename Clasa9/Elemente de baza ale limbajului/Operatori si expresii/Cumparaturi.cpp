#include <iostream>

using namespace std;

int main()
{
    int s, b, r, c;

    cin >> b >> s;

    r = s / b;

    cout << r << " ";

    c = s - r * b;

    c = b - c;

    cout << c;

    return 0;
}