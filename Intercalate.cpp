//#include <iostream>
//#include <cstring>
//
//void Intercalate(char a[], char b[], char c[])
//{
//	int i = 0, j = 0, index = 0;
//	int lenghtA = strlen(a), lenghtB = strlen(b);
//
//	while (i < lenghtA && j < lenghtB)
//	{
//		std::cout << "i = " << i << " j = " << j << '\n';
//		
//		c[index++] = a[i];
//		c[index++] = b[j];
//
//		i ++;
//		j ++;
//	}
//
//	while (i < lenghtA)
//	{
//		std::cout << "i = " << i << " j = " << j << '\n';
//
//		c[index++] = a[i];
//
//		i++;
//	}
//
//	while (j < lenghtB)
//	{
//		std::cout << "i = " << i << " j = " << j << '\n';
//
//		c[index++] = b[j];
//
//		j++;
//	}
//
//	c[index] = '\0';
//}
//
//int main()
//{
//	char a[] = "abcdefg", b[] = "XYZ", c[1001];
//
//	Intercalate(a, b, c);
//
//	std::cout << c;
//
//	return 0;
//}