#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 *is_palindrome - This is the entry point of the code
 *@s: input
 *Return:0 Success
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}
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
/**
 *check_pal - This is the entry point of the code
 *@s: input 1
 *@i: input 2
 *@len: input 3
 *Return:0 Success
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
