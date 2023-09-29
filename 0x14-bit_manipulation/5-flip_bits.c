#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: 1st number
 * @m: 2nd number
 * Return: eturns the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int num = 0;

	while (xor)
	{
		num += xor & 1ul;
		xor >>= 1;
	}

	return (num);
}
