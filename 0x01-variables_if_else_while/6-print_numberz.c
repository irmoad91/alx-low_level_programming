#include <stdio.h>
/**
 * main - Entry point
 * Print numbers from 0 to 9 with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

