#include "main.h"

/**
 * checker - check for natural square root of a number
 * @n: number to check for square
 * @base: base of square root
 * Return: natural square root of a number
 */

int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);

	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: base of square root
 * Return: natural square root of a number
*/

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
