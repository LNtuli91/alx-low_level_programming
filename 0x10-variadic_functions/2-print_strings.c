#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print the string followed by a new line
 * @separator: The string to printed between string
 * @n: The number of string passed to the function
 * @..: A variable number string to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
