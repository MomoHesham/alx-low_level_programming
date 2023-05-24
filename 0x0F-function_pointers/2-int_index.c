#include "function_pointers.h"

/**
 * int_index - function searches for integer
 * @array: array of integer
 * @size: size of array
 * @cmp: pointer to function to br used to compare values
 * Return: return index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
