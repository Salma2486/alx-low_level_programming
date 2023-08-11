#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int n = 0, m;

	while (n <= 99)
	{
		m = n;

			while (m <= 99)
			{
				if (m != n)
				{
					putchar((n / 10) + 48);
					putchar((n % 10) + 48);
					putchar(' ');
					putchar((m / 10) + 48);
					putchar((m % 10) + 48);
					if (n != 98 || m != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
				m++;
			}
		n++;
	}
	putchar('\n');
	return (0);
}
