#include "main.h"

/**
 * prime_check - check for prime number
 * @i: iterator
 * @num: number
 * Return: 1 if input integer is a prime number otherwise return 0
 */

int prime_check(int i, int num)
{
	if (num % i == 0 || num < 2)
		return (0);
	else if (i == num - 1)
		return (1);
	else if (num > i)
		return (prime_check(i + 1, num));
	return (1);
}

/**
 * is_prime_number - check for prime number
 * @n: prime number
 * Return: returns 1 if the input integer is a prime number otherwise return 0
*/

int is_prime_number(int n)
{
	return (prime_check(2, n));
}
