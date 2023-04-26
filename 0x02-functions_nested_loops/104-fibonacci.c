#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
*/

int main(void)
{
	int i = 0;
	long a1 = 1, a2 = 2;

	while (i < 98)
	{
		if (i == 0)
		{
			printf("%ld", a1);
		}
		else if (i == 1)
		{
			printf(", %ld", a2);
		}
		else
		{
			a2 += a1;
			a1 = a2 - a1;
			printf(", %ld", a2);
		}
		i++;
	}
	printf("\n");
	return (0);
}
