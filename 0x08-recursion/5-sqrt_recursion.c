#include "main.h"
int square(int n, int val);
/**
 *_sqrt_recursion - kjfswr
 *@n: input 1
 *
 *Return:0 Success
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 *square - uhfecswed
 *@val: input 1
 *@n: input
 *Return:0 Success
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
		return (-1);
}
