#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    cout << (x % 10 + y % 10) % 10 << endl;

    return 0;
}