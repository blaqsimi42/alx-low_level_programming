#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdio
 * @filename:name of the file to be read
 * @letters: number of letters to be read and printed
 * Return: actual number of letters it could read and print out
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_b;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_b = open(filename, O_RDONLY);
	if (file_b == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_b);
		return (0);
	}
	lenr = read(file_b, buffer, letters);
	close(file_b);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
