#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to index
 * @index: the bit we want to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	unsigned long int bit = 1UL << index;

	if ((*n >> index) & 1)
	{
		*n -= bit;
	}
	return (1);
}

