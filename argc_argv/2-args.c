#include <stdio.h>

/**
 * main - function
 *
 *@argc: argc
 *@argv: pointer
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
		printf("%d\n", argv[i]);

	return (0);
}
