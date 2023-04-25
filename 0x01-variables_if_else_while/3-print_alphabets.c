#include <stdio.h>

/**
 * main - entry point
 * Description: 'a => Z'
 * Return: always 0
*/

int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		puchar(lett);

	for (lett = 'A'; lett <= 'Z'; lett++)
		putchar(lett);
	putchar('\n');
	return (0);
}
