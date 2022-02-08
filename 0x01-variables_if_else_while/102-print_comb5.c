#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

		for (i = '0'; i <= 98; i++)
		{
				for (j = i++; j <= 99; j++)
				{
					if (i % 10 != j % 10 && i / 10 != j / 10)
					{	
						putchar((i / 10) + '0');
						putchar((i % 10) + '0');
						putchar(' ');
						putchar((j / 10) + '0');
						putchar((j % 10) + '0');
					}

						if (i == 98 && j == 99)
							continue;
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
