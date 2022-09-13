#include "main.h"


/**
 * main - codes for Alx students.
*
* program that prints _putchar, followed by a new line
* Return: always 0
 */
int main(void)
{
char str[] = "_putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
