#include "main.h"
int actual_prime(int n, int i);
/**
 *is_prime_number - oundrgfvodl
 *@n: input 1
 *Return:0 Success
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
/**
 *actual_prime - This is the entry point of the code
 *@n: input 1
 *@i: input 2
 *Return:0 Success
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
