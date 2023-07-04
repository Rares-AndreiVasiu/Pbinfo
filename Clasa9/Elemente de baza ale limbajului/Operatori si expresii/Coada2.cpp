#include <fstream>

using namespace std;

ifstream cin("coada2.in");

ofstream cout("coada2.out");

long long x, y, z, t;

int main()
{
    cin >> x >> y >> z;

    if (x >= y || x >= z)
    {
        cout << -1;
 
        return 0;
    }

    t = y + z - x;

    cout << ((t < 2) ? -1 : t);

    cin.close();

    cout.close();
}