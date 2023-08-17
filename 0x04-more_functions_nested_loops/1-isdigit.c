#include "main.h"
/**
 *_isdigit - This is the entry point of the code
 *
 *@c: input
 *
 *Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
		return (1);
	return (0);
}
