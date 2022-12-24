//#include <iostream>
//#include <fstream>
//
//std::ifstream fin("ghicitoare.in");
//std::ofstream fout("ghicitoare.out");
//
//unsigned xorN(unsigned n)
//{
//	switch (n % 4)
//	{
//	case 0:
//	{
//		return n;
//		break;
//	}
//	case 1:
//	{
//		return 1;
//		break;
//	}
//	case 2:
//	{
//		return (n + 1);
//		break;
//	}
//	default:
//		return 0;
//	}
//}
//
//unsigned T, N, S, G;
//
//int main()
//{
//	fin >> T;
//
//	for (int i = 1; i <= T; ++i)
//	{
//		fin >> N >> S;
//
//		G = xorN(N);
//
//		G = G ^ S;
//
//		fout << G << '\n';
//	}
//	return 0;
//}