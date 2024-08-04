#include "main.h"

/**
 * create_file - function
 *
 *@filename: all in the name
 *@text_content: same thing
 *
 *Return: Always
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int d;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	d = open(filename, O_WRONLY | O_APPEND);

	if (d == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(d, text_content, strlen(text_content));
		
		if (w == -1)
		{
			close(d);
			return (-1);
		}
	}

	close(d);
	return (1);
}
