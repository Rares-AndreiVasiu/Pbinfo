#include <bits/stdc++.h>

using namespace std;

struct marte
{
    int lei;

    int bani;
} v[4];

long long s;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        cin >> v[i].bani;
    }

    for (int i = 1; i <= 3; i++)
    {
        cin >> v[i].lei;
    }

    for (int i = 1; i <= 3; i++)
    {
        s += v[i].bani * v[i].lei;
    }

    cout << s;

    return 0;
}