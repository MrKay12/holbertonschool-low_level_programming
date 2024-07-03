#include "main.h"

/**
 * _prm_find - function
 *
 * @prm: input
 * @num: 2nd input
 *
 * Return: Always 0
 */

int _prm_find(int prm, int num)
{
	if (prm <= 1)
		return (0);

	if (num * num > prm)
		return (1);

	if (prm % num == 0)
		return (0);

	return (_prm_find(prm, num + 1));

}

/**
 * is_prime_number - function
 *
 * @n: input
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{

	return (_prm_find(n, 2));
}
