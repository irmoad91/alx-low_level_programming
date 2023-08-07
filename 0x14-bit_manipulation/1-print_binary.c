#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8;
	int num = 0;

	do {
		bin--;

		if ((n >> bin) & 1)
		{
			_putchar('1');
			num = 1;
		}
		else if (num)
		{
			_putchar('0');
		}
	} while (bin);

	if (!num)
	{
		_putchar('0');
	}
}
