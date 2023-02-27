#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	long length = 0;
       for(; s[length] != '\0'; ++ length);
         return length;
}
