#include "main.h"
/**
 *_isupper - This is the entry point of the code
 *
 *@c: input
 *
 *Return: Returns 1 if c is uppercase returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
