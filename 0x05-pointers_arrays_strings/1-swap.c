#include "main.h"

/**
 * swap int - swap values of two intergers
 *
 * @a: int to swap
 * @b: int to swap
 *
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;

}
