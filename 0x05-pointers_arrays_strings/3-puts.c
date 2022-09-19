#include "main.h"

/**
*  _puts - a function that prints a string, followed by a new line, to stdout
* @str: pointer type char
*
* Description: prints a string
* on success: returns no error
*/

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
