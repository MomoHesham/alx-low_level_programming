#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: char string
 * @f: function pointer that takes a string argument
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
