#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: name of file
 * @text_content: written content
 *
 * Return: (succes) denote 1, (fail) denote -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_a, alphabet, command;

	if (!filename)
	{
		return (-1);
	}
	file_a = open(filename, O_CREAT || O_WRONLY | O_TRUNC, 0600);
	if (file_a == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (alphabet = 0; text_content[alphabet]; alphabet++)
	{
		;
	}
	command = write(file_a, text_content, alphabet);
	if (command == -1)
	{
		close(file_a);
		return (-1);
	}
	close(file_a);
	return (1);
}
