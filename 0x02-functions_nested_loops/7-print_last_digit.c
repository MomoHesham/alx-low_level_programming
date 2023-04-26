#include "main.h"

/**
 * print_last_digit - function print last digit of a number
 * @i: the last digit that will be print
 * Return: return last digit i
*/

int print_last_digit(int i)
{
	if (i > 10)
	{
		i = i % 10;
		return (i);
	}
	return (i);
}
