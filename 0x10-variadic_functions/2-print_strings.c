#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - This is the entry point of the code
 *@separator: njnudfsvfs
 *@n: ojunosfusjo
 *Return:0 Success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	char *str;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
