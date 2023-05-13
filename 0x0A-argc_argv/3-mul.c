#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int result;

	if ((argc - 1) == 2)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
