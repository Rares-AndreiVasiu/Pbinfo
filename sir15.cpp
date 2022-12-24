/**
#include <iostream>
#include <fstream>

std::ifstream fin("sir.in");
std::ofstream fout("sir.out");

int c, n;

int main()
{
	fin >> c >> n;

	if (c == 1)
	{
		int indice = 1, mx = 1;

		for (int i = 1; i <= n; ++i)
		{
			int x;

			fin >> x;

			if (x >= mx)
			{
				mx = x;
				indice = i;
			}
		}
		fout << indice;
	}
	else
	{
		int indice = 1, mx = 1;

		for (int i = 1; i <= n; ++i)
		{
			int x;

			fin >> x;

			if (x >= mx)
			{
				mx = x;

				indice = i;
				
				fout << indice << ' ';
			}
		}
		
	}

	return 0;
}
**/