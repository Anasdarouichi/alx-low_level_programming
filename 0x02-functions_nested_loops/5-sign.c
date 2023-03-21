#include "main.h"


/**
 *print_sign - it will show the given 'n' is +ve or 0 or -ve
 *
 *@n: this is the value to be used
 *
 *Return: 1 for +ve 0 for 0 and -1 for -ve
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
