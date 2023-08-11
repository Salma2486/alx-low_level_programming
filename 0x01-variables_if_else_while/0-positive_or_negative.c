#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive %d", n);
		else if (n < 0)
		{
			printf("is negative %d", n);
			else
				printf("is zero %d", n)
		}
	}
	return (0);
}
