//#include <iostream>
//#include <cstring>
//#include <cmath>
//
//int FBaza(const char s[])
//{
//	int cifmax = 0;
//	const char c[] = "ABCDEFabcdef";
//
//	bool valid = true;
//	bool flagChar = false;
//
//	for (int i = 0; i < strlen(s) && valid; ++i)
//	{
//		if (isdigit(s[i]))
//		{
//			int digit = s[i] - '0';
//
//			cifmax = std::max(cifmax, digit);
//		}
//		else
//		{
//			if (std::isalpha(s[i]))
//			{
//				if (std::strchr(c, s[i]) != NULL)
//				{
//					flagChar = true;
//				}
//				else
//				{
//					valid = false;
//				}
//			}
//			else
//			{
//				valid = false;
//			}
//		}
//	}
//
//	if (valid)
//	{
//		if (cifmax < 2 && !flagChar)
//		{
//			return 2;
//		}
//		else
//		{
//			if (cifmax < 4 && !flagChar)
//			{
//				return 4;
//			}
//			else
//			{
//				if (cifmax < 8 && !flagChar)
//				{
//					return 8;
//				}
//				else
//				{
//					if (cifmax < 10)
//					{
//						if (!flagChar)
//						{
//							return 10;
//						}
//						else
//						{
//							return 16;
//						}
//					}
//				}
//			}
//		}
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	std::cout << FBaza("100011") << '\n';
//	std::cout << FBaza("2012") << '\n';
//	std::cout << FBaza("64420") << '\n';
//	std::cout << FBaza("88601") << '\n';
//	std::cout << FBaza("7FFffa2") << '\n';
//	std::cout << FBaza("44g0xff") << '\n';
//}