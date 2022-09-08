#include <unistd.h>

/**
 * main - print the string in the function
 *
 * Return: Always 1 "Programming is like building a multilingual puzzle"
 */
int main(void)
{
	write(2,"and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
