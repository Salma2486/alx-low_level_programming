#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib1 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
