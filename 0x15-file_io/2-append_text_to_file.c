#include "main.h"
/**
  *append_text_to_file - function that appends text to the end of file
  *@filename: name of the file
  *@text_content: String to be appended to file
  *Return: 1 on success or -1 for failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rw, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	rw = write(fd, text_content, i);

	if (fd == -1 || rw == -1)
		return (-1);

	close(fd);

	return (1);
}
