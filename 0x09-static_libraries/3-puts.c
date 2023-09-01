#include "main.h"
/**
 *_puts - This is the entry point of the code
 *
 *@str: input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
