#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * ch_free_grid - entry point
 *
 * @grid: value of input
 * @length: input value
 */

void ch_free_grid(char **grid, size_t length)
{
	if (grid != NULL)
	{
		size_t i = 0;

		while (i < length)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
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
	size_t i = 0;

	if (words == NULL)
	{
		return (NULL);
	}
	while (i <= count)
	{
		words[i] = NULL;
		i++;
	}
	return (words);
}

/**
 * split_words - Splits a string into words.
 *
i * @str: The input string to be split.
 * @words: The array to store the split words.
 *
 * Return: The number of words found.
 */
size_t split_words(char *str, char **words)
{
	size_t word_count = 0;
	size_t char_count = 0;
	size_t j;
	size_t i = 0;
	int is_inside_word = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !is_inside_word)
		{
			is_inside_word = 1;
			words[word_count] = (char *)malloc((char_count + 2) * sizeof(char));
			if (words[word_count] == NULL)
			{
				ch_free_grid(words, word_count);
				return (0);
			}

			for (j = 0; j < char_count; j++)
			{
				words[word_count][j] = str[i - char_count + j];
			}
			words[word_count][j] = '\0';

			word_count++;
			char_count = 0;
		}
		else if (str[i] != ' ')
		{
			is_inside_word = 0;
		}
		else
		{
			char_count++;
		}
		i++;
	}
	if (is_inside_word)
	{
		words[word_count] = (char *)malloc((char_count + 2) * sizeof(char));
		if (words[word_count] == NULL)
		{
			ch_free_grid(words, word_count);
			return (0);
		}
	
		for (j = 0; j < char_count; j++)
		{
			words[word_count][j] = str[i - char_count + j - 1];
		}
		words[word_count][j] = '\0';
		word_count++;
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
	size_t word_count;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);

	}
	word_count = split_words(str, NULL);

	if (word_count == 0)
	{
		return (NULL);
	}
	words = allocate_words(word_count);
	if (words == NULL)
	{
		return (NULL);
	}

	split_words(str, words);
	return (words);
}
