#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int a = 0;
	char n = 'a';

	while (a < 10)
	{
		putchar("%d", a);
		a++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
