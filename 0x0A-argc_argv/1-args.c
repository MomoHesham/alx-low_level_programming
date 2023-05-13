#include <stdio.h>

/**
 * main - entry point
 * @argc: counts of arguments
 * @argv: array of strings
 * Return: always 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
