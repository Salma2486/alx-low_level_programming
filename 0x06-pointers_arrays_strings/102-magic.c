#include <stdio.h>
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p = &a[2];

	*(p + 2) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
