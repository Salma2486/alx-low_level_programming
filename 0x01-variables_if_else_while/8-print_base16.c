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

	for (;a < 10;)
		putchar(a);
		a++;
	for (;n <= 'f';)
		putchar(n);
		n++;
	putchar('\n');

	return (0);
}
