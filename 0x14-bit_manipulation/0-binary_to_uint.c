#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: string
 * Return: return to unsigned int b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		bin = (bin << 1) | (*b - '0');
	}
	return (bin);
}
