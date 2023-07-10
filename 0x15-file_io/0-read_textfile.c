#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - this function reads a text file
 * and then prints its content to the POSIX standard output.
 * @filename: the name of the file to be read.
 * @letters: the number of letters to be read and printed.
 *
 * Descroption: this function reads the specified text file (@filename)
 * and prints its content to the POSIX standard output
 * it reads a maximum of @letters letters from the file.
 * Return: the actual number of letters read and printed on success,
 * or 0 in case of any failure.
 * Possible failure cases include: the inability to open or read the file,
 * @filename being NULL, or if the write operation fails
 * or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	close(file_descriptor);
	return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	close(file_descriptor);
	if (bytes_read == -1)
	{
	free(buffer);
	return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);

	if (bytes_written != bytes_read)
	return (0);

	return (bytes_written);
}
