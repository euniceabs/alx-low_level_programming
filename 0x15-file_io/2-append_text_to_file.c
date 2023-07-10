#include "main.h"

/**
 * append_text_to_file - appends text content at the end of a file.
 * @filename: the name of the file.
 * @text_content: the text content to be appended.
 *
 * Description: this function appends the specified @text_content at the
 * end of the file with the given @filename. If the file exists,
 * the function opens it in append mode and writes the content.
 * If the file does not exist, it creates a new file with the given
 * name and writes the content. If @text_content is NULL or an
 * empty string, the function does nothing.
 * Return: 1 if the operation is successful and the file exists.
 * -1 if the file does not exist or if an error occurs during the operation.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	ssize_t bytes_written;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (text_content)
	{
	for (num_letters = 0; text_content[num_letters]; num_letters++)
	;

	bytes_written = write(fd, text_content, num_letters);
	if (bytes_written == -1)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}
