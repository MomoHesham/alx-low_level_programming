#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements
 * @a: array
 * @n: the number of elements of the array
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
