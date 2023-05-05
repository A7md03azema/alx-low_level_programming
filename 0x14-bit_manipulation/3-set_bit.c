#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at a given index you created
 * @n: decimal number passed by pointer to and from
 * @index: index position to change, starting from 0 to the exit
 * Return: 1 if it worked, -1 if error has done
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)

		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;
	return (1);
}
