#include <stdio.h>

/**
 * main - entry point
 * Description: 'lowercase alphabet in reverse'
 * Return: always 0
*/

int main(void)
{
	char lett;

	for (lett = 'z'; lett >= 'a'; lett--)
		putchar(lett);
	putchar('\n');
	return (0);
}
