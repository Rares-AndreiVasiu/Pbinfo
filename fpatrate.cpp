//#include <iostream>
//#include <utility>
//#include <vector>
//
//void patrate(int n, int& x, int& y)
//{
//	bool flag = false;
//
//	y = 1;
//
//	int divizor = 2;
//
//	while (n > 1)
//	{
//		if (n % divizor == 0)
//		{
//			if (n % (1LL * divizor * divizor) == 0)
//			{
//				if (!flag)
//				{
//					flag = true;
//					x = divizor;
//				}
//				else
//				{
//					y *= divizor;
//				}
//
//				n /= divizor * divizor;
//			}
//			else
//			{
//				x = y = 0;
//
//				return;
//			}
//		}
//		else
//		{
//			divizor++;
//		}
//
//		if (divizor * divizor > n)
//		{
//			divizor = n;
//		}
//
//	}
//	if (x == y)
//		x = y = 0;
//}
//
//int main()
//{
//	int x, n, y;
//
//	n = 400;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 16;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 24;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 508369;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 695957161;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 800;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 279841;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 972;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 8100;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 63504;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//	n = 666666667;
//
//	patrate(n, x, y);
//
//	std::cout << x << ' ' << y << '\n';
//
//}