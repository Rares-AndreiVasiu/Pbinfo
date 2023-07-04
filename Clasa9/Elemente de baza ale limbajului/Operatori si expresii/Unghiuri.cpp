#include <iostream>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main()
{

    float AB, BC, AC, cos_h1, cos_h2, cos_h3, h1, h2, h3, rad = 180 / 3.1415926535;

    cin >> AB >> BC >> AC;
    
    if ((AB + BC > AC) || (BC + AC < AB) || (AB + AC < BC))
    {
        cos_h1 = (AC * AC + AB * AB - BC * BC) / (2 * AC * AB);
        cos_h2 = (AB * AB + BC * BC - AC * AC) / (2 * AB * BC);
        cos_h3 = (BC * BC + AC * AC - AB * AB) / (2 * BC * AC);

        h1 = rad * (acos(cos_h1));
        h1 = h1 * 100;
        int r1 = h1;

        h2 = rad * (acos(cos_h2));
        h2 = h2 * 100;
        int r2 = h2;

        h3 = rad * (acos(cos_h3));
        h3 = h3 * 100;
        int r3 = h3;
        printf("%d.%d%d ", r1 / 100, (r1 / 10) % 10, r1 % 10);
        printf("%d.%d%d ", r2 / 100, (r2 / 10) % 10, r2 % 10);
        printf("%d.%d%d ", r3 / 100, (r3 / 10) % 10, r3 % 10);
    }
    else
       cout << "Imposibil";
    return 0;
}