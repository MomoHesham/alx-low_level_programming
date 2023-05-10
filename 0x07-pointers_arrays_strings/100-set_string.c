#include "main.h"
#include <stddef.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer of char
*/

void set_string(char **s, char *to)
{
	if (to != NULL)
		*s = to;
}
