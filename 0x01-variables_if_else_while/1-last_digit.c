#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (ld > 5)
	printf("last digit of %ld is %n and is greater than 5\n", n, ld);
	else if (ld < 6 && ld !=0)
	printf("last digit of %ld is %n and is less than 6 and not 0\n", n, ld);
	else
	printf("last digit of %ld is 0 and is 0\n", n);
	return (0);
}
