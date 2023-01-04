#include <iostream>
#include <fstream>

std::ifstream fin("lacom.in");
std::ofstream fout("lacom.out");

int x, y, n;

long long bomboane;

int main()
{
    fin >> n >> x;

    bomboane = x;

    for(int i = 2; i <= n; ++ i)
    {
        fin >> y;

        if(y > x)
        {
            bomboane += y;

            x = y;
        }
    }

    fout << bomboane;

    fin.close();
    fout.close();

    return 0;
}