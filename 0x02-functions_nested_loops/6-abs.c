#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: integer that be computed
 * Return: return c absolute value
*/

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
		return (c);
	}
	return (c);
}
