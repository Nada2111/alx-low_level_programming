#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
