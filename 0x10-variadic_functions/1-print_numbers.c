#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - function prints numbers
 * @separator: separator
 * @n: count of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;

	va_list args;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *)separator;

	va_start(args, n);

	if (n > 0)
		printf("%d", va_arg(args, int));
	for (i = 0; i < n; i++)
		printf("%s%d", sep, va_arg(args, int));

	printf("\n");
	va_end(args);
}
