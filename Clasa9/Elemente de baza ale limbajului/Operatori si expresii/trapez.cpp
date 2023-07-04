#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float B, b, l;

    cin >> B >> b >> l;

    cout << sqrt(((b + B) / 2) * ((b + B) / 2) + l * l - ((B - b) / 2) * ((B - b) / 2));

    return 0;
}