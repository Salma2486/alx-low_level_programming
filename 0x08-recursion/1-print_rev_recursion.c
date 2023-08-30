#include "main.h"
/**
 *_print_rev_recursion - This is the entry point of the code
 *
 *@s: input
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
