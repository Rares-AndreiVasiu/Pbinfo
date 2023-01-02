#include <iostream>
#include <cmath>
#include <map>
#include <iterator>

long long findGreatestPrimeFactor(long long N)
{
    if(N == 2 || N == 3)
    {
        return N;
    }

    std::map<long long, long long> primeFactors;

    while(N % 2 == 0)
    {
        N /= 2;
        primeFactors[2]++;
    }

    long long maxFactor = sqrt(N);

    for(long long i = 3; i <= maxFactor; i += 2)
    {
        while (N % i == 0)
        {
            N /= i;
            primeFactors[i]++;
        }
    }

    if(N > 1)
    {
        primeFactors[N]++;
    }

    long long greatestFactor = 0;
    int greatestPower = 0;

    for(auto it = primeFactors.begin(); it != primeFactors.end(); ++it)
    {
        long long factor = it -> first;
        int power = it -> second;

        if (power > greatestPower || (power == greatestPower && factor > greatestFactor)) 
        {
            greatestFactor = factor;
            greatestPower = power;
        }
    }

    return greatestFactor;
}

int main()
{
    long long N;

    std::cin >> N;

    std::cout << findGreatestPrimeFactor(N);

    return 0;
}