#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n : num
 * @index : index
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l;

	l = (sizeof(*(n)) * 8);
	if (index < l)
	{
		*(n) = ((1 << index) | *(n));
		return (1);

	}
	return (-1);
}
