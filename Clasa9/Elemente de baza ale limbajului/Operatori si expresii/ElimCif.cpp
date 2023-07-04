#include <iostream>

using namespace std;

int main()
{
    int n, u, s, a;

    cin >> n;

    u = n % 10;

    s = (n / 100) % 10;

    a = s * 10 + u;

    cout << a;

    return 0;
}