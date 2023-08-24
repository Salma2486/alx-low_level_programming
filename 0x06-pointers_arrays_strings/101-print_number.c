#include "main.h"
/**
 *print_number - This is the entry point of the code
 *
 *@n: input
 */
void print_number(int n)
{
	int i;
        int digit;
        char buffer[10];

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; n != 0; i++)
	{
		digit = n % 10;
		n /= 10;
		buffer[i] = digit + '0';
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
}
