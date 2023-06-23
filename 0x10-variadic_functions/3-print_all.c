#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *strg, *separator = "";
	va_list list;

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				break;
			case 's':
				strg = va_arg(list, char *);
				if (!strg)
				{
					strg = "(nil)";
				}
				printf("%s%s", separator, strg);
				break;
			default:
				i = i + 1;
				continue;
		}
		separator = ", ";
		i = i + 1;
	}
	printf("\n");
	va_end(list);
}
