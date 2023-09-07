#include "main.h"
#include <stdlib.h>
/**
 *_puts - This is the entry point of the code
 *@str: input
 *Return:0 Success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 *_atoi - This is the entry point of the code
 *@s: input
 *Return:0 Success
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstnum, i;

	for (firstnum = 0; !(s[firstnum] >= 48 && s[firstnum] <= 57); firstnum++)
	{
		if (s[firstnum] == '-')
			sign *= -1;
	}
	for (i = firstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}
/**
 *print_int - This is the entry point of the code
 *@n: input
 *Return:0 Success
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}
/**
 *main - This is the entry point of the code
 *@argc: input 1
 *@argv: input 2
 *Return:0 Success
 */
int main(int argc, char const *argv[])
{
	(void) argc;
	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
