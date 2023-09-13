#include "function_pointers.h"

/**
 *print_name - A function that prints a name
 *@name: pointer to name to print
 *@f: function to print a name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
