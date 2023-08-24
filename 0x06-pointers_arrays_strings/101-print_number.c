#include "main.h"
/**
 *print_number - This is the entry point of the code
 *
 *@n: input
 */
void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + 48);
}

