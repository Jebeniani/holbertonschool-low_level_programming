#include <stdio.h>
#include <ctype.h>
int main()
{
	int x, lower_x;
	x = 'A'; 

	for( x = 'A'; x <= 'Z'; x++)
	{
	lower_x = tolower(x);
	putchar(lower_x);
	}
	putchar('\n')
	return 0;
}
