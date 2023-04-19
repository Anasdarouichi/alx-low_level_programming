#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: is input name.
 * @f: is function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
