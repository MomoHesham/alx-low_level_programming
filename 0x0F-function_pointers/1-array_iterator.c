#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: my array of integer
 * @size: size of array
 * @action: void function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
