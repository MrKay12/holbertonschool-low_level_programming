#include "main.h"

/**
 * _sqrt_find - function
 *
 * @sqr: input
 * @num: 2nd input
 *
 * Return: Always 0
 */

int _sqrt_find(int sqr, int num)
{
	if (sqr * sqr == num)
		return (sqr);

	if (sqr * sqr > num)
		return (-1);

	return (_sqrt_find(sqr + 1, num));
}



/**
 * _sqrt_recursion - function
 *
 * @n: input
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	return (_sqrt_find(1, n));
}
