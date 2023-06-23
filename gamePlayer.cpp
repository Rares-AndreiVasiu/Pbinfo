#include <iostream>
#include <vector>
#include <algorithm>


#define DBG 1

std::vector<int> v;

int n, r;

int binarySearch(std::vector<int> v, int first, int last, int points)
{
    int middle = first + (last - first)/ 2;

    while(first < last)
    {
        if(v[middle] == points)
        {
            return middle + 1;
        }
        else
        {
            if(v[middle] > points)
            {
                last = middle - 1;
            }
            else
            {
                if(v[middle] < points)
                {
                    first = middle + 1;
                }
            }

            if(first == last)
            {
                return first + 1;
            }
        }
    }
}

/*
80 100 120
pos = 60
f = 0
l = 2


*/


int main()
{
    std::cin >> n;

    for(int i = 0; i < n; ++ i)
    {
        int x;

        std::cin >> x;

        v.emplace_back(x);
    }

    std::sort(v.begin(), v.end());

    auto last = std::unique(v.begin(), v.end());

    v.erase(last, v.end());

    #if DBG == 1
    for(auto x: v)
    {
        std::cout << x << ' ';
    }
    #endif


    std::cin >> r;

    for(int i = 0; i < r; ++ i)
    {
        int points;

        std::cin >> points;

        std::cout << binarySearch(v, 0, n - 1, points) << ' ';
    }

    v.clear();

    return 0;
}