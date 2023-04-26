#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
*/

int main(void)
{
	long int a1, a2, a3;
	int i;

	a1 = 1;
	a2 = 2;
	printf("%ld, %ld, ", a1, a2);
	for (i = 0; i < 48; i++)
	{
		a3 = a1 + a2;
		printf("%ld, ", a3);
		a1 = a2;
		a2 = a3;
	}
	printf("\n");
	return (0);
}
