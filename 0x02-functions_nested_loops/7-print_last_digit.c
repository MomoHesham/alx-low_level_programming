#include "main.h"

/**
 * print_last_digit - function print last digit of a number
 * @i: the last digit that will be print
 * Return: return last digit i
*/

int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar (i + '0');
	return (i);
}
