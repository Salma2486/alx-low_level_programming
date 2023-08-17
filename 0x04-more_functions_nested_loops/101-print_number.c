#include "main.h"
/**
 *print_number - This is the entry point of the code
 *
 *@n: input
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	print_number((num % 10) + 48);
}
