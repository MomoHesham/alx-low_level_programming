#include <stdio.h>

/**
 * main - entry point
 *
 *Description: 'print size function'
 *
 *
 * Return: always 0
 */

int main(void)
{
	char chartype;
	int inttype;
	long int lginttype;
	long long int lglginttype;
	float floattype;

	printf("Size of a char: %ld byte(s)\n", sizeof(chartype));
	printf("Size of an int: %ld byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lginttype));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lglginttype));
	printf("Size of a float: %ld byte(s)\n", sizeof(floattype));
	return (0);
}
