#include <stdio.h>

/**
 *Description: 'print size'
 * Return: always 0
 */

int main(void)
{
	char chartype;
	int inttype;
	long int lginttype;
	long long int lglginttype;
	float floattype;

	printf("Size ofa char: %d byte(s)\n", sizeof(chartype));
	printf("Size of an int: %d byte(s) \n", sizeof(inttype));
	printf("Size of a long int: %d byte(s)\n", sizeof(lginttype));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lglginttype));
	printf("Size of a float: %d byte(s)\n", sizeof(floattype));
	return (0);
}
