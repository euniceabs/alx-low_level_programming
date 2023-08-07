#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

#define MAX_BUFFER 128


/**
 * read_elf_header - Reads the ELF header from a file descriptor
 *
 * @fd: The file descriptor to read from
 * @buffer: The buffer to store the ELF header in
 *
 * Return: The number of bytes read
 */
ssize_t read_elf_header(int fd, char *buffer)
{
ssize_t n = read(fd, buffer, MAX_BUFFER);

if (n == -1)
{
perror("read");
exit(98);
}

return (n);
}

/**
 * print_elf_class - Prints the ELF class to the console
 *
 * @ehdr: A pointer to the ELF header
 */
void print_elf_class(Elf64_Ehdr *ehdr)
{
printf("  Class:                              ");
switch (ehdr->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Unknown\n");
break;
}
}

/**
 * print_elf_data - Prints the ELF data encoding to the console
 *
 * @ehdr: A pointer to the ELF header
 */
void print_elf_data(Elf64_Ehdr *ehdr)
{
printf("  Data:                               ");
switch (ehdr->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("Unknown\n");
break;
}
}

/**
 * print_elf_header - Prints the ELF header to the console
 *
 * @ehdr: A pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
int i;
printf("ELF Header:\n");
printf("  Magic:                              ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", ehdr->e_ident[i]);
printf("\n");
print_elf_class(ehdr);
print_elf_data(ehdr);
}

/**
 * main - The entry point of the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
Elf64_Ehdr *header;
int o, r;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s <file>\n", argv[0]);
exit(1);
}

o = open(argv[1], O_RDONLY);
if (o == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}

header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close(o);
dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
exit(98);
}

r = read(o, header, sizeof(Elf64_Ehdr));
if (r == -1)
{
free(header);
close(o);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}

free(header);
close(o);
return (0);
}

