#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * ch_free_grid - entry point
 *
 * @grid: value of input
 * @length: input value
 */

void ch_free_grid(char **grid, size_t length)
{
	size_t i;

	if (grid != NULL && length != 0)
	{
		for (i = 0; i < length; i++)
		{
			free(grid[i]);
		}
		free(grid[i]);
	}
}


/**
 * allocate_words - Allocates memory for an
 * array of words based on word counts.
 *
 * @count: The number of words to allocate memory for.
 *
 * Return: An array of strings or NULL on failure.
 */
char **allocate_words(size_t count)
{
	char **words = (char **)malloc((count + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	return (words);
}

/**
 * split_words - Splits a string into words.
 *
 * @str: The input string to be split.
 * @words: The array to store the split words.
 *
 * Return: The number of words found.
 */
size_t split_words(char *str, char **words)
{
	size_t word_count = 0;
	size_t char_count = 0;
	size_t j;
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			words[word_count] = (char *)malloc((char_count + 2) * sizeof(char));
			if (words[word_count] == NULL)
			{
				ch_free_grid(words, word_count);
				return (0);
			}

			for (j = 0; j <= char_count; j++)
			{
				words[word_count][j] = str[i - char_count + j];
			}
			words[word_count][j] = '\0';

			word_count++;
			char_count = 0;
		}
		else if (str[i] != ' ')
		{
			char_count++;
		}
	}
	return (word_count);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The input string to be split.
 *
 * Return: A grid of words (strings) or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	size_t word_count;

	if (str == NULL || *str == '\0')
	{
		return (NULL);

	}
	words = NULL;
	word_count = split_words(str, words);

	if (word_count == 0)
	{
		return (NULL);
	}

	words[word_count] = NULL;
	return (words);
}
