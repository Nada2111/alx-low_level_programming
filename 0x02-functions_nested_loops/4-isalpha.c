#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * Return: 1 when it is C c 
 * else return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' ; c <= 'z') || (c >= 'A' ; c <= 'Z')
		return (1);
	else 
		return (0);
}
