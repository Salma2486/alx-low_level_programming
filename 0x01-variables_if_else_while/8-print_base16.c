#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int a;
	char n;

	while (a < 10)
	{
		putchar(a);
		a++;
	}
	while ( n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
