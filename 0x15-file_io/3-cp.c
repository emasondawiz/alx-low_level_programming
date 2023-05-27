#include "main.h"

/**
 * create_buffer - Function that creates a buffer.
 * @file: Input value.
 * Return: Input value
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * _closefile - it Closes file function
 * @fd: Input value
 */
void _closefile(int fd)
{
	int myc;

	myc = close(fd);

	if (myc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Main Entry
 * @argc: Input value
 * @argv: Input value
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int myfrom, myto, myr, myw;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	myfrom = open(argv[1], O_RDONLY);
	myr = read(myfrom, buf, 1024);
	myto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (myfrom == -1 || myr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		myw = write(myto, buf, myr);
		if (myto == -1 || myw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		myr = read(myfrom, buf, 1024);
		myto = open(argv[2], O_WRONLY | O_APPEND);

	} while (myr > 0);
	free(buf);
	_closefile(myfrom);
	_closefile(myto);
	return (0);
}
