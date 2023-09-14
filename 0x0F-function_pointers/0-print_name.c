#include "function_pointers.h"
/**
 *print_name - This is the entry point of the code
 *@name: input
 *@f: input
 *Return:0 Success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
