#include "main.h"
/**
 *rev_string - This is the entry point of the code
 *
 *@s: input
 */
void rev_string(char *s)
{
	int a, count = 0;
	char c;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	for (a = 0; a < (count / 2); a++)
	{
		c = s[a];
		s[a] = s[count - 1 - a];
		s[count - 1 - a] = c;
	}
}
