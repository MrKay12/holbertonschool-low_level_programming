#include <stdio.h>
#include "main.h"

/**
 * swap_int - fonctions for pointers
 *
 * @a: 1st input
 * @b: 2nd input
 *
 * Always return 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
