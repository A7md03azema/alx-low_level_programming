#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
	int lower_x = tolower(x);
	putchar(lower_x);
	}
return(0);	
}
