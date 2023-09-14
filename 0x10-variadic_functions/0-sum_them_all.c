#include "variadic_functions.h"
#include "stdarg.h"
/**
 *sum_them_all - This is the entry point of the code
 *@n: jnsfdv
 *Return:0 Success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	int sum = 0;
	unsigned int i;

	va_start(p, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);

}
