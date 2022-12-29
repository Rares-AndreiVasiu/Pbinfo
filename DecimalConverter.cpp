#include <iostream>
#include <cstring>


long long int n;
char ch;

int main()
{
    std::cin >> ch >> n;

    if(ch == 'b')
    {
        //to binary from dec
        int v[1001];
        int p = 0;

        while(n)
        {
            v[p] = n % 2;

            ++ p;

            n /= 2;
        }

        for(int i = p - 1 ; i >= 0 ; --i)
            std::cout << v[i];
    }

    else
    {
        //to oct from dec
        if(ch == 'o')
        {
            int v[1001];
            int p = 0;

            while(n)
            {
                v[p] = n % 8;

                ++p;

                n /= 8;
            }

            for(int i = p - 1 ; i >= 0 ; --i)
                std::cout << v[i];
        }

        else
        {
            //to hex from dec
            char v[1001];
            int p = 0;

            while(n)
            {
                if(n % 16 > 9)
                {
                    int nr = n % 16 - 9;

                    v[p] = (char)(nr + 'A' - 1);
                }
                else
                    v[p] = (char) (n % 16 + '0');

                ++p;

                n /= 16;
            }

            for(int i = p - 1 ; i >= 0 ; --i)
                std::cout << v[i];
        }
    }

    return 0;
}