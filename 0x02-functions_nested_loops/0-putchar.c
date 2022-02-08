#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int write(int filedes, const char *buf, unsigned int nbyte); 
int main( int argc, char** argv ) 
{ 
	   write(1, "_putchar\n", 9); 
	    
	      return 0; 
} 
