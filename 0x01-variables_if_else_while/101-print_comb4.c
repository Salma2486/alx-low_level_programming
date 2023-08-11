#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int n = 0;
	int a, b;

	while (n <= 9)
	{
		a = 0;
		while (a <= 9)
		{
			b = 0;
			while (b <= 9)
			{
				if (n != a && n < a && a != b && a < b)
				{
					putchar(n + 48);
					putchar(a + 48);
					putchar(b + 48);
					if (n + a + b != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				b++;
			}
			a++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
