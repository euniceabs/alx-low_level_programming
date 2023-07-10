#include "main.h"

/**
 * create_file - creates a file and writes content to it.
 * @filename:the name of the file to be created.
 * @text_content: the content to be written in the file.
 *
 * Description: this function creates a file with the specified @filename and
 * writes the content specified in @text_content to it.
 * if the file already exists, its contents are truncated.
 * if @text_content is NULL, an empty file is created.
 * the file is created with read and write permissions for the owner only.
 *
 * Return: 1 on success, -1 on failure. If the file cannot be created
 * or if there is an error while writing the content, -1 is returned.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int content_length;
	ssize_t bytes_written;

	if (!filename)
	return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	content_length = 0;
	while (text_content[content_length])
	content_length++;

	bytes_written = write(file_descriptor, text_content, content_length);
	if (bytes_written == -1)
	{
	close(file_descriptor);
	return (-1);
	}

	close(file_descriptor);
	return (1);
}
