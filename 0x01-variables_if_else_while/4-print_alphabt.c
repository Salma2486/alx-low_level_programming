#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
	if (n == 'q' || n == 'e')
	{
		n++;
	}
		putchar(n);
		n++;
	}
		putchar('\n');
	return (0);
}
