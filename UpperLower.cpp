//#include <iostream>
//#include <cstring>
//
//void UpperLower(const char a[], char U[], char L[])
//{
//	int indexU = 0, indexL = 0;
//
//	for (int i = 0; i < strlen(a); ++i)
//	{
//		if (std::islower(a[i]))
//		{
//			U[indexU++] = std::toupper(a[i]);
//
//			L[indexL++] = a[i];
//		}
//		else
//		{
//			if (std::isupper(a[i]))
//			{
//				L[indexL++] = std::tolower(a[i]);
//
//				U[indexU++] = a[i];
//			}
//			else
//			{
//				U[indexU++] = a[i];
//				L[indexL++] = a[i];
//			}
//		}
//	}
//
//	U[indexU] = '\0';
//	L[indexL] = '\0';
//}
//
//int main()
//{
//	char s[] = "I Am a Sith Lord", u[101], l[101];
//
//	UpperLower(s, u, l);
//
//	std::cout << u << '\n' << l;
//}