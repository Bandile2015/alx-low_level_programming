#include "main.h"

/**
 * main - codes for Alx students.
*
* program that prints _putchar, followed by a new line
* Return: always 0
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

		while (s[i] != '\0')
	{
		_putchar(s[i]);
			i++;
	}
	_putchar(10);

	return (0);
}
