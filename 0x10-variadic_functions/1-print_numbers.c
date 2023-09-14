#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - This is the entry point of the code
 *@separator: ouhesfol
 *@n: kjfdwefw
 *Return:0 Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int sum = 0;
	unsigned int i;
	
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(p, int);
		printf("%d", sum);
		if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
}
