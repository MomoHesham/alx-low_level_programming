#include "main.h"

/**
 * jack_bauer - prints every minute of the day
*/

void jack_bauer(void)
{
	int i, j, k, s;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
			{
				for (k = 0; k <= 5; k++)
				{
					for (s = 0; s <= 9; s++)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(58);
						_putchar(k + '0');
						_putchar(s + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
