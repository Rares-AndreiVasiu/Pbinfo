//#include <iostream>
//#include <string>
//
//std::string s, digits;
//
//unsigned lenghtDigits, lenghtS, steps, indexStr, pos;
//
//int main()
//{
//	std::cin >> s;
//
//	lenghtS = s.size();
//
//	for (unsigned i = 0; i < s.size() / 2; ++i)
//	{
//		if (digits.find(s[i]) == std::string::npos)
//		{
//			digits.push_back(s[i]);
//		}
//	}
//
//	lenghtDigits = digits.size();
//
//	if (lenghtS > 1)
//	{
//		if (lenghtS % lenghtDigits == 0)
//		{
//			while ((indexStr = s.find(digits, pos)) != std::string::npos)
//			{
//				steps++;
//
//				pos = indexStr + 1;
//			}
//
//			if (steps == lenghtS / lenghtDigits)
//			{
//				std::cout << "DA";
//			}
//			else
//			{
//				std::cout << "NU";
//			}
//		}
//		else
//		{
//			std::cout << "NU";
//		}
//	}
//	else
//	{
//		std::cout << "NU";
//	}
//
//	return 0;
//}