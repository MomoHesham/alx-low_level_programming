#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of array
 * @height: height of array
 * Return: 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int i, j, **g;

	if (height <= 0 || width <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			while (i >= 0)
			{
				free(g[i]);
				i--;
			}
			free(g);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}
