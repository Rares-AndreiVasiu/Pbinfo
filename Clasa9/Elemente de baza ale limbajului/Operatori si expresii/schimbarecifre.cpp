#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, z, u, a, n1;

    cin >> n;
    
    if (n % 10 == 0)
    {
        z = (n / 10) % 10;
    
        a = pow(z, 2);
    
        cout << a;
    }
    else
    {
        u = n % 10;
    
        z = (n / 10) % 10;
    
        a = u * 10 + z;
    
        n1 = pow(a, 2);
    
        cout << n1;
    }
    return 0;
}
