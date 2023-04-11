#include "main.h"
#include <ctype.h>


/**
 *_islower - finding the lowercase char
 *
 *@c: this is the value that it take
 *
 *Return: 1 or 0
**/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
