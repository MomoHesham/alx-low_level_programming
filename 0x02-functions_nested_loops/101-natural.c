#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
*/

int main(void)
{
	int a, b;

	b = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
