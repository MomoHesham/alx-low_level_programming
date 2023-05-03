#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements
 * @a: array
 * @n: the number of elements of the array
*/

void print_array(int *a, int n)
{
	n = 0;
	while (a[n] != '\0')
	{
		if (n == 0)
		{
			printf("%d", a[n]);
		}
		else
		{
			printf(", %d", a[n]);
		}
		a++;
	}
	printf("\n");
}
