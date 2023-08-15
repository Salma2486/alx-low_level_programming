#include "main.h"
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
