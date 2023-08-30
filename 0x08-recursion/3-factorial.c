#include "main.h"
/**
 *factorial - This is the entry point of the code
 *@n: input
 *Return:0 Success
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
