#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - function prints strings
 * @separator: separator
 * @n: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}

	printf("\n");
	va_end(list);
}
