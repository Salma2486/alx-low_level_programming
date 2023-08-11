#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
