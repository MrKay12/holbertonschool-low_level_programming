#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

void error(const char *msg, int code, const char *file);

/**
 * main - function
 * @argc: arguments.
 * @argv: arguments.
 *
 * Return: Always
 */
int main(int argc, char *argv[])
{
	int df, dt;
	ssize_t r, w;
	char b[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error("Usage: cp file_from file_to\n", 97, "");

	df = open(argv[1], O_RDONLY);
	if (df == -1)
		error("Error: Can't read from file %s\n", 98, argv[1]);

	dt = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (dt == -1)
	{
		close(df);
		error("Error: Can't write to %s\n", 99, argv[2]);
	}

	while ((r = read(df, b, BUFFER_SIZE)) > 0)
	{
		w = write(dt, b, r);
		if (w == -1)
		{
			close(df);
			close(dt);
			error("Error: Can't write to %s\n", 99, argv[2]);
		}
	}

	if (r == -1)
	{
		close(df);
		close(dt);
		error("Error: Can't read from file %s\n", 98, argv[1]);
	}

	if (close(df) == -1)
		error("Error: Can't close fd %d\n", 100, argv[1]);

	if (close(dt) == -1)
		error("Error: Can't close fd %d\n", 100, argv[2]);

	return (0);
}

/**
 * error - error message
 * @msg: error message
 * @code: exit code.
 * @file: name file with error.
 */

void error(const char *msg, int code, const char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}
