#include "main.h"
/**
 *_pow_recursion - This is the entry point of the code
 *
 *@x: input 1
 *@y: input 2
 *Return:0 Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	{
		return (x *=  _pow_recursion(x, (y - 1)));
	}
}
