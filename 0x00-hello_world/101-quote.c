#include <unistd.h>

/**
 * main - print the string in the function
 *
 * this program prints (Programming is like building a multilingual puzzle)
 * Return: 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
