#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copying the content of one file to another.
 * @argc: the argument count.
 * @argv: the arguments passed.
 *
 * Description: this function copies the content of one file
 * specified by `argv[1]` to another file specified by `argv[2]`
 *
 * Return: 1 on success. If the number of arguments is incorrect,
 * it prints an error message to the standard error and exits with code 97.
 * If it encounters an error during file operations (opening, reading,
 * writing, closing), it prints an appropriate error message and exits
 * with the corresponding exit code (98, 99, or 100).
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "%s", "Usage: my_cp file_from file_to\n");
	exit(97);
	}

	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');

	while (n_read == 1024)
	{
	n_read = read(src, buffer, sizeof(buffer));
	if (n_read == -1)
	check_IO_stat(-1, -1, argv[1], 'O');
	wrote = write(dest, buffer, n_read);
	if (wrote == -1)
	check_IO_stat(-1, -1, argv[2], 'W');
	}

	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');

	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');

	return (0);
}
/**
 * check_IO_stat - Checks if a file can be opened or closed.
 * @stat: The result of the file operation (e.g., open, close).
 * @fd: The file descriptor associated with the file.
 * @filename: The name of the file.
 * @mode: The file operation mode (closing or opening).
 *
 * Description: This function is used to check the success or failure of
 * file operations such as opening or closing a file. It takes the result
 * of the file operation (@stat), the file descriptor (@fd), the name of
 * the file (@filename), and the file operation mode (@mode) as parameters.
 *
 * Return: this function does not return any value.
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
	}
}
