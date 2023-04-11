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
	unsigned long int n = 0, c = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			c++;
		n = n >> 1;
	}
	return (c);
}
