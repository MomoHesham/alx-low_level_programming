#include <stdio.h>

/**
 * main -entry point
 * Description: 'print comb 3'
 * Return: always 0
*/

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit1 = digit2 + 1; digit2 < 10; digit2++)
		{
			printf((digit1 % 10) + '0');
			printf((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
