#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float a, b, c, ma, mb, mc;

int main()
{
    cin >> a >> b >> c;

    if (a + b <= c or a + c <= b or b + c <= a)
    {
        cout << "Imposibil";
    }
    else
    {
        ma = sqrt((2 * (c * c + b * b) - a * a) / 4);

        mb = sqrt((2 * (a * a + c * c) - b * b) / 4);

        mc = sqrt((2 * (a * a + b * b) - c * c) / 4);

        ma = ma * 100;

        mb = mb * 100;

        mc = mc * 100;

        cout << int(ma) / 100 << '.' << int(ma) / 10 % 10 << int(ma) % 10 << ' ';
        
        cout << int(mb) / 100 << '.' << int(mb) / 10 % 10 << int(mb) % 10 << ' ';

        cout << int(mc) / 100 << '.' << int(mc) / 10 % 10 << int(mc) % 10 << ' ';
    }

    return 0;
}