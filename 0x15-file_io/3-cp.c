#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void look_IO_stat(int stat, int fd, char *filename, char state);

/**
 * main - function that duplicates content of
 * one file to another
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (success) denote 1
 */
int main(int argc, char *argv[])
{
	int fd, dest, n_read = 1024, wrote, close_fd, close_dest;
	unsigned int state = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp_file_from_file\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	look_IO_stat(fd, -1, argv[1], 'O');

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, state);
	look_IO_stat(dest, -1, argv[2], 'W');

	while (n_read == 1024)
	{
		n_read = read(fd, buffer, sizeof(buffer));
		if (n_read == -1)
			look_IO_stat(-1, -1, argv[1], 'O');

		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			look_IO_stat(-1, -1, argv[2], 'W');
	}

	close_fd = close(fd);
	look_IO_stat(close_fd, fd, NULL, 'C');

	close_dest = close(dest);
	look_IO_stat(close_dest, dest, NULL, 'C');

	return (0);
}

/**
 * look_IO_stat - function that checks if a file can be
 * closed or opened
 *
 * @stat: file descriptor for open
 * @filename: name of file
 * @state: opening or closing
 * @fd: file descriptor
 *
 * Return: (void)
 */
void look_IO_stat(int stat, int fd, char *filename, char state)
{
	if (state == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	else if (state == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
		exit(98);
	}
	else if (state == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
}
