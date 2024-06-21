#include <stdio.h>
#include "main.h"

/**
* jack_bauer - Entry point
*
* Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int m;
	int h;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			write("%02i:%02i", h, m);
		}
	}
}
