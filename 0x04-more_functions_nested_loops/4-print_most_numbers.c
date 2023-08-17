#include "main.h"
/**
 *print_most_numbers - This is the entry point of the code
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
		{
			ch++;
		}
		_putchar(ch);
	}
	_putchar('\n');
}

