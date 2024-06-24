#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if (a != 100)
			printf(" ");

		if	((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz");

		if (a % 3 == 0)
			printf("Fizz");

		if (a % 5 == 0)
			printf("Buzz");

		else
			printf("%i", a);

	}
	printf("\n");
	return (0);
}
