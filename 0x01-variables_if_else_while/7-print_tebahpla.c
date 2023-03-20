#include <stdio.h>
/**
 * main - Entry point
 * prints the lowercase alphabet in reverse followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
