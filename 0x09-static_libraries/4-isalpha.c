#include "main.h"
#include <ctype.h>
/**
 *_isalpha - this is chaking c if it is alphabet
 *
 *@c: this is the value that is checked
 *
 *
 *Return: 1 or 0
 **/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
