#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	    int i, j, count = 0;
    while (str[count] != '\0') {
        count++;
    }
    j = count - 1;
    // reversing the string by swapping
    for (i = 0; i < count; i++) {
        rev[i] = str[j];
        j--;
    }
		_putchar(*s);
			_putchar('\n');
}


