#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: array of integer
 * @n: number of element to swap
*/

void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[last] = start;
		a[i] = end;
		last--;
	}
}
