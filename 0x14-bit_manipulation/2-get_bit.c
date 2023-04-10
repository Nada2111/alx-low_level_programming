#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n : the bit
 * @index: start 0
 * Returns: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	    unsigned long int mask = 1UL << index; 
	    if (n & mask)
		    return (1);
	    else
		    return (0);
}
