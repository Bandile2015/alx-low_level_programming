#include <stdio.h>

/**
* main - print the string in the function
*
* Return Always 0 (Programming is like building a multilingual puzzle)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int:  %d byte(s)\n", sizeof(c));
	printf("Size of a long long: %d byte(s)\n", sizeof(d));
	 printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
