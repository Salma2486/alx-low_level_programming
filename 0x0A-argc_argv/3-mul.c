#include <stdio.h>
#include <stdlib.h>
/**
 *main - This is the entry point of the code
 *@argv: input 1
 *@argc : input 2
 *Return:0 Success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int m = 0;

		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
