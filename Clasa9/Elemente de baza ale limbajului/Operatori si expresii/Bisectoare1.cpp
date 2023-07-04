#include <iostream>
#include <cmath>
using namespace std;

float a, b, c;
float Ba, Bb, Bc;
float p;

int main()
{
    cin >> a >> b >> c;

    if (a + b <= c or a + c <= b or b + c <= a)
    {
        cout << "Imposibil";
    }
    else
    {
        p = (a + b + c) / 2;

        //bisectoarea in A
        Ba = sqrt(4 * b * c / ((b + c) * (b + c)) * p * (p - a));

        Ba = Ba * 100;

        cout << int(Ba) / 100 << '.' << int(Ba) / 10 % 10 << int(Ba) % 10 << ' ';

        //bisectoarea in B

        Bb = sqrt(4 * a * c / ((a + c) * (a + c)) * p * (p - b));

        Bb = Bb * 100;

        cout << int(Bb) / 100 << '.' << int(Bb) / 10 % 10 << int(Bb) % 10 << ' ';

        //bisectoare in C

        Bc = sqrt(4 * a * b / ((a + b) * (a + b)) * p * (p - c));

        Bc = Bc * 100;

        cout << int(Bc) / 100 << '.' << int(Bc) / 10 % 10 << int(Bc) % 10;
    }

    return 0;
}