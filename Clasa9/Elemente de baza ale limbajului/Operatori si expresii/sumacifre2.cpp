#include <iostream>

using namespace std;

int main()
{
    int n, s;

    cin >> n;

    s = (n % 10) + (n / 10) % 10;

    cout << s;

    return 0;
}