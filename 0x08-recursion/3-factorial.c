#include "main.h"

/**
 * factorial -calculate the factorial of n
 * @n: number to return the factorial
 *
 * Return : factorial of the int n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n-1));
}
