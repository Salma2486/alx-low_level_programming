#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main - This is the entry point of the code
 *@argv: input 1
 *@argc: input 2
 *
 *Return:0 Success
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
