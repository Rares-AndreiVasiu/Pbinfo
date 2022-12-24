//#include <iostream>
//#include <fstream>
//#include <set>
//#include <iterator>
//#include <algorithm>
//
//std::ifstream fin("set.in");
//std::ofstream fout("set.out");
//
//std::set<long long> S;
//std::set<long long> ::iterator upBound;
//std::set<long long> ::iterator lowBound;
//
//int n, option;
//
//long long x, y;
//
//
//int main()
//{
//	fin >> n;
//
//	for (int i = 1; i <= n; ++ i)
//	{
//		fin >> option;
//
//		if (option == 1)
//		{
//			fin >> x;
//
//			S.insert(x);
//		}
//		else
//		{
//			if (option == 2)
//			{
//				fin >> x;
//
//				if (S.empty())
//					fout << -1 << '\n';
//				else
//				{
//					upBound = S.upper_bound(x);
//					lowBound = S.lower_bound(x);
//
//					if (S.find(x) != S.end())
//					{
//						if (lowBound != S.end())
//							fout << *lowBound << '\n';
//						else
//							fout << -1 << '\n';
//					}
//					else
//					{
//						if (upBound != S.end())
//							fout << *upBound << '\n';
//						else
//							fout << -1 << '\n';
//					}
//				}
//			}
//			else
//			{
//				fin >> x >> y;
//
//				lowBound = S.lower_bound(x);
//				upBound = S.upper_bound(y);
//
//				S.erase(lowBound, upBound);
//				
//			}
//		}
//	}
//	return 0;
//}