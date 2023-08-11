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

	for (a = 0; a < 10; a++)
		putchar(a);
	for (n = a ; n <= 'f'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
