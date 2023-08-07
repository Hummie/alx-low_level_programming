#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *get_buff(char *file);
void close_file(int fd);
/**
  *get_buff - function allocates 1024 bytes for a buffer
  *@file: Name of file
  *Return: To newly allocated buffer
  */
char *get_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
  *close_file - Function to close file descriptors
  *@fd: Descriptor being closed
  */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  *main - functio to copy one file to another file
  *@argc: Number of arguments passed to program
  *@argv: An array of arguments
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int src, dest, rod, wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = get_buff(argv[2]);
	src = open(argv[1], O_RDONLY);
	rod = read(src, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || rod == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wrt = write(dest, buff, rod);
		if (dest == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rod = read(src, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (rod > 0);

	free(buff);
	close_file(src);
	close_file(dest);

	return (0);
}
