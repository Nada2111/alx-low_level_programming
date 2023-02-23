#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
*Returns 1 if c is uppercase
*Returns 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else 
	return (0);
}
