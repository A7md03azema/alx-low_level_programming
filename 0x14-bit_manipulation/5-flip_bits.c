#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flip bits to convert one number to another number and change
 * @n: first number to flip from
 * @m: second number to convert to from num 1
 * Return: number of bits that was needed to flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}
	return (counter);
}
