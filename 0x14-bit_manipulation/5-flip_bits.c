#include "main.h"

/**
 * flip_bits - change number.
 * @n: number
 * @m: other numer
 *
 * Return: numer of bits you would to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, c = 0;

	i = n ^ m;
	while (i)
	{
		if (i & 1)
			c++;
		i = i >> 1;
	}
	return (c);
}
