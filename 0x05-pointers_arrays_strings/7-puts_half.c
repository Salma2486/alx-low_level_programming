#include "main.h"
/**
 *puts_half - This is the entry point of the code
 *
 *@str: input
 */
void puts_half(char *str)
{
	int a, n, count = 0;

	for (a = 0; str[a] != '\0'; a++)
		count++;
	n = (count - 1) / 2;
	for (a = n + 1; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
