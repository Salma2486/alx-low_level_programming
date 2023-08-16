#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Description: 'the program's description'
 *
 *Return:0 Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{
	int i;

	i % 2;
	positive_or_negative(i);
	return (0);
}
