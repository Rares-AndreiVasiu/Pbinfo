#include <iostream>

using namespace std;

int main()
{
    int h1, m1, x, y;

    cin >> h1 >> m1 >> x >> y;

    cout << (h1 + (m1 + y) / 60 + x) % 24 << " " << (m1 + y) % 60;

    return 0;
}
