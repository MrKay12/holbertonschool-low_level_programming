#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function
 *
 * @argc: var
 * @argv: pointer
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	opr = get_op_function(argv[2]);

	if (opr == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", opr(a, b));
	return (0);
}
