#include <iostream>
#include <fstream>
#include <string>
#include <limits>

std::ifstream fin("ifelse.in");
std::ofstream fout("ifelse.out");

int n;

std::string str;

int tokenize(std::string s, std::string del = " ")
{
	int start = 0, end = -1 * del.size();
	int countWords = 0, countCond = 0;
	int modificatios = 0;

	do
	{
		countWords++;

		start = end + del.size();
		end = s.find(del, start);

		std::string aux = s.substr(start, end - start);

		if (aux[0] == 'i')
		{
			countCond++;
		}
		else
		{
			countCond--;
		}

		if (countCond == -1)
		{
			countCond = 1;

			modificatios++;
		}

	} while (end != -1);

	if (countWords & 1)
		return -1;

	return (modificatios + countCond / 2);
}

int main()
{
	fin >> n;

	fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for (int i = 1; i <= n; ++i)
	{
		std::getline(fin, str);

		fout << tokenize(str, " ") << '\n';
	}

	fin.close();
	fout.close();

	return 0;
}