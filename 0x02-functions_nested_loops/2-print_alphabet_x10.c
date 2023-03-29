#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *@i to print 10 time
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		for (i = 0 ; i < 10 ; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
