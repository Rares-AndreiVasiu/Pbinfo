//#include <iostream>
//
//unsigned long long insertBit(uint64_t n, unsigned long long bit, unsigned long long k)
//{
//	return (n | (bit << k));
//}
//
//unsigned long long getBit(unsigned long long n, unsigned long long k)
//{
//	return ((n & (1ULL << k)) >> k);
//}
//
//unsigned long long bitSwap(unsigned long long n, unsigned long long m, unsigned long long position)
//{
//	unsigned long long newNumber = 0;
//
//	unsigned long long nBitsM = sizeof(m) * 8;
//
//	for (unsigned long long i = 0; i < position; ++i)
//	{
//		unsigned long long bit = getBit(n, i);
//
//		newNumber = insertBit(newNumber, bit, i);
//	}
//
//	for (unsigned long long i = 0; i < nBitsM; i++)
//	{
//		unsigned long long bit = getBit(m, i);
//
//		newNumber = insertBit(newNumber, bit, position);
//		
//		position++;
//	}
//
//	return newNumber;
//}
//
//unsigned long long n, m, k;
//
//int main()
//{
//	std::cin >> n >> m >> k;
//
//	std::cout << bitSwap(n, m, k);
//
//	return 0;
//}


//#include <iostream>
//
//int nrBiti(unsigned long long x)
//{
//	return 64 - __builtin_clzll(x);
//}
//
//unsigned long long n, m, i;
//
//int main()
//{
//	std::cin >> n >> m >> i;
//
//	std::cout << (n & ~(((1ULL << nrBiti(m)) - 1) << i)) + (m << i);
//	
//	return 0;
//}