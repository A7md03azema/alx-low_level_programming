#include "main.h"
/**
 * get_endianness - check endianness you done
 * Return: 0 if big endian, or 1 if little endian and that's it
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)

		return (1);
	else
		return (0);
}
