#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: file name to be read
 * @letters: count of letters that should be read and printed
 * Return: return actual letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_a;
	ssize_t p, q;
	char *storage;

	if (filename == NULL)
		return (0);
	file_a = open(filename, O_RDONLY);
	if (file_a == -1)
	{
		perror("Error opening the file");
		return (0);
	}
	storage = malloc(sizeof(char) * letters);
	if (storage == NULL)
	{
		perror("Error allocating memory");
		close(file_a);
		return (0);
	}
	p = read(file_a, storage, letters);
	close(file_a);
	if (p == -1)
	{
		perror("Error reading the file");
		free(storage);
		return (0);
	}
	q = write(STDOUT_FILENO, storage, p);
	if (q == -1)
	{
		perror("Error writing to standard output");
		free(storage);
		return (0);
	}
	free(storage);
	if (p != q || p != (ssize_t)letters)
	{
		fprintf(stderr, "Error: Incorrect number of letters written\n");
		return (0);
	}
	return (q);
}
