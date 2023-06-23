#include <iostream>
#include <map>

std::map<long long, long long> blocks;

int main()
{   
    long long n, m;

    std::cin >> n;

    for(long long i = 1; i <= n; ++ i)
    {
        long long x;

        std::cin >> x;

        if(blocks[x] == 0)
        {
            blocks[x] = 1;
        }
        else
        {
            if(blocks[x] >= 1)
            {
                blocks[x] ++;
            }
        }
    }

    std::cin >> m;

    for(long long i = 1; i <= m; ++ i)
    {
        int x;

        std::cin >> x;

        std::cout << blocks[x] * x << ' ';
    }

    return 0;
}