#include <iostream>

using namespace std;

int main()
{
    int a, patrat, cifs, cifu, copiea;

    cin >> a;

    copiea = a;

    cifs = a / 100;

    cifu = a % 10;

    patrat = cifs * 10 + cifu;

    patrat = patrat * patrat;

    cout << patrat;

    return 0;
}