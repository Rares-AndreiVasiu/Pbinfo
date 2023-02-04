#include <iostream>
#include <iomanip>

int main()
{
    long double a, b, c, d;
    
    std::cin >> a >> b >> c >> d;
    
    if(d - c != 0)
    {
        long double year = (c * b - a * d) / (d - c);
    
        std::cout << std::fixed << std::setprecision(2) << year;
    }
    else
    {
        long double year = 0;
        
        std::cout << std::fixed << std::setprecision(2) << year;
    }
    return 0;
}