#include "main.h"
/**
* print_line - draw a straight line
* @n: number of times underscore is printed
* Description: Can only use _putchar to print
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
