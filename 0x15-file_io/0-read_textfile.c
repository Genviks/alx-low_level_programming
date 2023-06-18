#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints to POSIX stdout
 * @filename: name of file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: the total number of letters read and printed, or 0 if unsuccessful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024];
	ssize_t total_read = 0;
	ssize_t num_read, num_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (total_read < (ssize_t)letters && (num_read = read(fd,
					buffer, sizeof(buffer))) > 0)
	{
		num_written = write(STDOUT_FILENO, buffer, (size_t)num_read);

		if (num_written == -1 || (size_t)num_written != (size_t)num_read)
		{
			close(fd);
				return (0);
		}
		total_read += num_written;
	}

	close(fd);
	return (total_read);
}
