#include <iostream>
#include <fstream>

std::ifstream fin("estearbore.in");
std::ofstream fout("estearbore.out");

const int nm = 102;

int  n, m, i, j, visited[nm];

bool flag = true;

char a[nm][nm];

void dfs(int x)
{
    visited[x] = 1;

    for(int i = 1; i <= n; i ++)
    {
        if(a[x][i] == 1 && !visited[i]) 
        {
            dfs(i);
        }
    }
}

int main()
{
    fin >> n;

    while(fin >> i >> j)
    {
        if(!a[i][j])
        {
            m ++;
        }
        
        a[i][j] = a[j][i] = 1;
    }

    if(n != m + 1)
    { 
        fout << "NU";
    }

    else
    {
        dfs(1);

        for(i = 2; i <= n; ++i)
        {
            if(!visited[i])
            {
                flag = false;
            }
        }
        
        if(flag)
        {
            fout << "DA";
        }
        
        else
        {
            fout << "NU";
        }
    }
    
    return 0;
}