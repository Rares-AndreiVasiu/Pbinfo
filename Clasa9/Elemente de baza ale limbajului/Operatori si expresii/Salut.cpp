#include <iostream>

using namespace std;

int main()
{
    long long unsigned n, s = 0, i;

    cin >> n;

    for (i = 1; i <= n; i++)
        s = s + n - i;

    cout << s;

    return 0;
}