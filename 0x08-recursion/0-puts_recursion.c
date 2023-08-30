#include "main.h"
/**
 *_puts_recursion - This is the entry point of the code
 *
 *@s: input
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
