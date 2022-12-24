//#include <iostream>
//#include <cmath>
//
//#define ull unsigned long long
//
//ull n;
//
//int main()
//{
//	std::cin >> n;
//
//	while (n)
//	{
//		if (n & 1)
//		{
//			n = n ^ 1u;
//		}
//		else
//		{
//			n = n ^ (1 << std::log2(n & -n));
//		}
//
//		std::cout << n << ' ';
//	}
//}
//
///*
//let x = 0b1101000;
//
//console.log(x & 1);            // 0 (the farthest-right bit)
//console.log(x & -x);           // 8 (the farthest-right 1 by itself)
//console.log(Math.log2(x & -x); // 3 (the zero-based index of the farthest-right 1)
//*/