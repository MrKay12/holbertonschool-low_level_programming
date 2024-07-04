#include "main.h"

/**
 * _strspn - function
 *
 * @s: 1st pointer
 * @accept: pointer
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, further = 0, length = 0, newLength = 0, stillGoing = 0;

    for (i = 0 ; s[i] != '\0' ; i++)
    {
        for (j = further ; accept[j] != '\0' ; j++)
        {
            printf("%c, ", accept[j]);
            if (s[i] == accept[j])
            {
                further = j;
                if (stillGoing != i - 1)
                {
                    if (newLength > length)
                        length = newLength;
                    newLength = 0;
                    further = 0;
                }
                stillGoing = i;
                newLength++;
                printf("\n");
                break;
            }
        }
        if (accept[j] == '\0')
        {
            further = 0; 
            if (newLength > length)
		    length = newLength;
	    newLength = 0;
	}
    }
	return (length);
}
