#include <iostream>

using namespace std;

int main()
{
    int n, m, e, b, N, elevi, banci;

    cin >> n >> m >> e >> b;

    N = (-m * b - e) / (n - m);

    elevi = n * N + e;

    banci = N;

    cout << elevi << endl;

    cout << banci;

    return 0;
}