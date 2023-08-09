#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer 
 * Return: A pointer to the newly-allocated buffer.
 * * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_origin, file_dest;
	ssize_t numb;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_origin = open(argv[1], O_RDONLY);
	if (file_origin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_dest = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((numb = read(file_origin, buff, BUFF_SIZE)) > 0)
	{
		if (write(file_dest, buff, numb) != numb)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (numb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((close(file_origin) == -1) || (close(file_dest) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_origin);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
