#include "main.h"
/**
 *_islower - check lowercase charactor
 *
 *@c: check input of function
 *
 *Return: return if 'c' lowercase otherwise return zero
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
