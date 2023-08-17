#include "main.h"
/**
 *print_numbers - This is the entry point of the code
 *
 */
void print_numbers(void)
{
	char ch = 48;

	while (ch >= 48 && ch <= 57)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
