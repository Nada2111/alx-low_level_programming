#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * Return: 1 when it is C c
 * else return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
