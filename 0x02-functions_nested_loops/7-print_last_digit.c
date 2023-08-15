#include "main.h"
/**
 *print_last_digit - print the last digit of a number
 *
 *@n: take number input
 *
 *Return: a
 */
int print_last_digit(int n)
{
	if (n < 0)
		a = -1 * (n % 10);
	else
		a = n % 10;
	_putchar(a + '0');
		return (a);
}
