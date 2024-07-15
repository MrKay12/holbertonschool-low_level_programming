#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - function
 *
 *@f: pointer
 *@name: var
 *
 *Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
