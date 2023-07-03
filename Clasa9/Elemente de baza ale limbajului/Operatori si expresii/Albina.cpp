#include <iostream>

using namespace std;

int main()
{
    int n;

    long long s = 1, p = 6;

    cin >> n;

    n--;

    while (n)
    {
        s = s + p;

        n--;

        p = p + 6;
    }
    cout << s;

    return 0;
}