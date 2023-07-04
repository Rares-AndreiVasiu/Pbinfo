#include <iostream>

using namespace std;

int main()
{
    long long n, S = 0;

    cin >> n;

    if (n == 0)
        cout << 0;
    else
    {
        for (int i = 1; i <= n; i += 2)
            S = S + i;

        cout << S;
    }
    
    return 0;
}