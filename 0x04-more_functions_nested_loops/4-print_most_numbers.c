#include "main.h"
/**
 *print_most_numbers - This is the entry point of the code
 */
void print_most_numbers(void)
{
	char ch = 48;

	while (ch >= 48 && ch <= 57)
	{
		if (ch == 50 || ch ==52)
		{
			ch++;
		}
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

