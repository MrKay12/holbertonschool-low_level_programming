#include "main.h"

/**
 * read_textfile - function
 *
 *@filename: name on it
 *@letters: same
 *
 *Return: Always
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	ssize_t r, w;
	char *b;

	if (filename == NULL)
		return (0);

	d = open(filename, O_RDONLY);

	if (d == -1)
		return (0);

	b = (char *)malloc(letters * sizeof(char));

	if (b == NULL)
	{
		close(d);
		return (0);
	}

	r = read(d, b, letters);

	if (r == -1)
	{
		free(b);
		close(d);
		return (0);
	}

	w = write(STDOUT_FILENO, b, r);
	free(b);
	close(d);

	if (w != r)
		return (0);

	return (w);
}
