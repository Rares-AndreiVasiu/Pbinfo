#include <iostream>

uint64_t insertBit(uint64_t n, unsigned bit, int k)
{
	return (n | (bit << k));
}

unsigned getBit(uint64_t n, int k)
{
	return (((n & (1u << k)) >> k);
}

uint64_t bitSwap(uint64_t n, uint64_t m, unsigned position)
{
	uint64_t newNumber = 0;

	unsigned nBitsM = sizeof(m) * 8;

	for (int i = 0; i < position; ++i)
	{
		unsigned bit = getBit(n, i);

		newNumber = insertBit(newNumber, bit, i);
	}

	for (int i = position; i < nBitsM; i++)
	{
		unsigned bit = getBit(m, i);

		newNumber = insertBit(newNumber, bit, i);
	}

	return newNumber;
}

int n, m, k;

int main()
{
	std::cin >> n >> m >> k;

	std::cout << bitSwap(n, m, k);

	return 0;
}