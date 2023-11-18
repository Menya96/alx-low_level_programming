#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string to be printed.
 */
void _print_rev_recurson(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		_putchaar(*s);
	}
}

