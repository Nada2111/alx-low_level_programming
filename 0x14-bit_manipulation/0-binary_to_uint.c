#include "main.h"
#include <stdio.h>


/**
 * binary_to_uint - convert binary number to unsigned integer number.
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, p;
	int f;

	if (b == NULL)
		return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] != '0' && b[f] != '1')
			return (0);
	}

	for (p = 1, i = 0, f--; f >= 0; f--, p *= 2)
	{
		if (b[f] == '1')
			i += p;
	}
return (i);
}
