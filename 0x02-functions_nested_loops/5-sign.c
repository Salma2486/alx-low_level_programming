#include "main.h"
/**
 *print_sign - print + if positive, 0 if zero amd - if negative
 *
 *@n : intiger number input
 *
 *Return: return 1 if + return 0 if zero return -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar(43);
	return (1);
	if (n == 0)
		_putchar(48);
	return (0);
	if (n < 0)
		_putchar(45);
	return (-1);
}
