#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @index: index
 * @n : the bit
 * Return: bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
