#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
*/

void more_numbers(void)
{
	int x, t;

	for (x = 0; x <= 9; x++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t > 9)
				_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
