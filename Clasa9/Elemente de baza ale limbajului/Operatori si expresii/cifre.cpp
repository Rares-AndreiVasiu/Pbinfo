#include <iostream>

using namespace std;

int main()
{
    unsigned int x;

    cin >> x;

    cout << x % 10 + x / 10 % 10 << endl;

    return 0;
}