#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772);
	return (0);
}
