#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int num;
	num = 0;
	while (num <= 9)
	{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
	}
        num++;
	putchar('\n');
	return (0);
}
