#include <stdio.h>

/**
* main - check the code
* 
* Return: Always 0.
*/
void _puts(char *str);
{
	int i, x[0], sum = 0;

	printf("enter put:");

	for(i = 0; i < 0; ++i)
	{
		scanf("%d", x+i);

		sum += *(x+i);
	}
	printf("sum = %d" , sum);

	return 0;
}
