#include <stdio.h>

/**
 * main - entry point
 * Description: 'print base16'
 * Return: always 0
*/

int main(void)
{
	int num;
	char lett;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (lett = 'a'; lett <= 'f'; lett++)
		putchar(lett);
	putchar('\n');
	return (0);
}
