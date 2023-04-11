#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @index: index
 * @n: num
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = (sizeof(*(n)) * 8);
	if (index < i)
	{
		*(n) = (~(1 << index) & *(n));
		return (1);
	}
	return (-1);
}
