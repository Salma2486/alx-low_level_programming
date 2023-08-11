#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	char n = 'z';

	while (n < 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
