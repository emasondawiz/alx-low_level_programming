#include "function_pointers.h"

/**
 * print_name - print function
 * @name: Input value
 * @f: Input value (pointer function)
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
