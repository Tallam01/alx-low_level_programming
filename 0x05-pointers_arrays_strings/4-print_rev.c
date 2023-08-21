#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followerd by a new line.
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	char *str;
	int n = 0;


	str = s;
	n = _strlen(str);
	while(--n => 0)
		_putchar(s[n]);
	_putchar('\n');
}

/**
 * _strlen - calculate the length of a string.
 *
 * @s: string to get lenght.
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int n = 0;

	while(*s++ !='\0')
		n++;
	return (n);
}
