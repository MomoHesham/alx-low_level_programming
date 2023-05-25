#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, unsigned int);

		res += x;
	}
	va_end(args);

	return (res);
}
