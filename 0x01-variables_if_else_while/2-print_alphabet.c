#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dx;

	for (dx = 'a'; dx <= 'z'; dx++)
	{
		putchar(dx);
	}
	putchar('\n');
	return (0);
}
