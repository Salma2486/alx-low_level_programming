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
	(void)argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
