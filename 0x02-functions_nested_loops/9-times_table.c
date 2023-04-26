#include "main.h"

/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
	int a, b, c, x, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				x = c % 10;
				d = (c - x) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(x + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
