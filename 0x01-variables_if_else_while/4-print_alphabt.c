#include <stdio.h>

/**
 * main - entry point
 * Description: 'all except q and e'
 * Return: always 0
*/

int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		if (lett != 'q' && lett != 'e')
		{
			putchar(lett);
		}
	}
	putchar('\n');
	return (0);
}
