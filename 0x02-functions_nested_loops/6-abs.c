#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @i: integer input
 * Return: absolute value of ab
 */
int _abs(int i)
{
	if (i < 0)
	i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
