#include "main.h"
/**
 *_strlen_recursion - This is the entry point of the code
 *@s: input
 *Return:0 Success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
