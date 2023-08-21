#include "main.h"
/**
 *print_rev - This is the entry point of the code
 *
 *@s: input
 */
void print_rev(char *s)
{
	int a, count = 0;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	for (a = (count - 1); a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
