#include <iostream>
#include <cmath>
#include <iomanip>

long double x;

long double divLog(long double left, long double right)
{
	long double middle = (left + right) / 2;
	
	long double value = std::exp(middle);	

	if(abs(value - x) < 0.0000001)
	{
		return middle;
	}
	if(value < x)
	{
		return divLog(middle, right);
	}

	return divLog(left, middle);
}

int main()
{
	std::cin >> x;

	std::cout << std::fixed << std::setprecision(6) << (int)(cb(0, 22) * 1000000) / 1000000.0;

	return 0;
}
