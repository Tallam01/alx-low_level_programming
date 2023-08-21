#include "main.h"

/**
 * int_strlen - returns length of a string
 *
 * @s: string to find length
 *
 * return: length of a string
 */

void 2-strlen.c(char *s)
{
	int n = 0;

	while(*s++ != '\0')
		n++;
	return(n);
}
