//#include <iostream>
//
//int NrXDivImp(int a[], int st, int dr, int x)
//{
//	int mid = (st + dr) / 2;
//
//	if (st > dr or (st == dr and a[st] != x))
//	{
//		return 0;
//	}
//
//	if (st == dr and a[st] == x)
//	{
//		return 1;
//	}
//
//	return (NrXDivImp(a, st, mid, x) + NrXDivImp(a, 1 + mid, dr, x));
//}
//
//
//int a[20];
//
//int main()
//{
//	a[1] = 2;
//	a[2] = 5;
//	a[3] = 1;
//	a[4] = 5;
//	a[5] = 3;
//	a[6] = 5;
//	a[7] = 5;
//	a[8] = 5;
//	a[9] = 7;
//	a[10] = 6;
//
//	std::cout << NrXDivImp(a, 1, 6, 5) << '\n';
//	std::cout << NrXDivImp(a, 9, 10, 5) << '\n';
//}