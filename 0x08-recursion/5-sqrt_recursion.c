#include "main.h"

/**
 * _sqrt_recursion - evaluate sqrt
 * @n: interger
 * Return: Sgrt_recursion
 */

int _sqrt_recursion(int n)
{
int i = 0;

if (i < 0) /*If n is negative*/
return (-1);

else
{
return (_evaluate(i, n)); /*Recursive call*/
}

}
