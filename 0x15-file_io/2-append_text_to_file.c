#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file
 *
 * @filename: name of file
 * @text_content: written content
 *
 * Return: (file exist) denote 1, (file does not) denote -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_a, alphabet, command;

	if (!filename)
	{
		return (-1);
	}
	file_a = open(filename, O_WRONLY | O_APPEND);
	if (file_a == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (alphabet = 0; text_content[alphabet]; alphabet++)
		{
			;
		}
		command = write(file_a, text_content, alphabet);
		if (command == -1)
		{
			return (-1);
		}
	}
	close(file_a);
	return (1);
}
