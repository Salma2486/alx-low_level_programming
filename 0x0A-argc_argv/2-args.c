#include <stdio.h>
/**
 *main - This is the entry point of the code
 *@argc: input 1
 *@argv: input 2
 *
 *Return:0 Success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
