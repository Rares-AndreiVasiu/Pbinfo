#include <iostream>

int getNumberOfDivisors(int n)
{
 	int cnt = 0;
    
	for (int i = 1; i * i <= n; ++i) 
	{
        if (n % i == 0) 
		{
            // If divisors are equal,
            // count only one
            if (n / i == i)
            {
				cnt ++;
			}
            else
			{
				 // Otherwise count both
                cnt += 2;
			}
		}
    }

    return cnt;
}

int n, p, sum;

int main()
{
	std::cin >> n >> p;

	for (int i = 0; i < n; i++)
	{
		int x;

		std::cin >> x;

		if(getNumberOfDivisors(x) >= p)
		{
			sum += x;
		}
	}
	std::cout << sum;

	return 0;
}