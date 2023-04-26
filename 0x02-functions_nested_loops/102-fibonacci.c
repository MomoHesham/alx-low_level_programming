#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
*/

int main(void)
{
	int a1, a2, a3, i;

	a1 = 1;
	a2 = 2;
	printf("%d, %d, ", a1, a2);
	for (i = 0; i <= 50; i++)
	{
		a3 = a1 + a2;
		printf("%d, ", a3);
		a1 = a2;
		a2 = a3;
	}
	printf("\n");
	return (0);
}
