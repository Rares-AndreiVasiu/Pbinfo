//#include <iostream>
//#include <fstream>
//
//std::ifstream fin("mate.in");
//std::ofstream fout("mate.out");
//
//long long n, T[101], poz = 1;
//
////Toate numerele triunghiulare si patrate perfecte
////pot fi gasite cu formula de recurenta
////T[n] = 34* T[n - 1] - T[n - 2] + 2
////unde T[0] = 0, T[1] = 1;
//
//int main()
//{
//	fin >> n;
//
//	T[0] = 0;
//	T[1] = 1;
//
//	fout << T[1] << ' ';
//	n--;
//
//	while (n)
//	{
//		n--;
//
//		poz++;
//
//		T[poz] = 34 * T[poz - 1] - T[poz - 2] + 2;
//
//		fout << T[poz] << ' ';
//	}
//
//	fin.close();
//	fout.close();
//
//	return 0;
//}