#include <iostream>

using namespace std;

int main()
{
    int n, p;

    cin >> n;

    p = (n % 10) * ((n / 100) % 10);

    cout << p;

    return 0;
}