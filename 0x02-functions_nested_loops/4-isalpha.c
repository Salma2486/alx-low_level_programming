#include "main.h"
/**
 *_isalpha - checks if charactor is alphabetic or not
 *
 *@c: charactor to be checked
 *
 *Return: if c is a letter return 1, otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
