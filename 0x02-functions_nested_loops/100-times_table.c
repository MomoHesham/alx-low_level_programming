#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times table
*/
void print_times_table(int n)
{
	int x = 0, y, z;

	if (n >= 0 && n <= 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (z = 0; z <= n; z++)
			{
				x = y * z;
				if (x > 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
				else if (x > 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					if (z != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(x + '0');
				}
			}
			_putchar('\n');
		}
	}
}
