#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_space - Checks if a character is a whitespace character.
 *
 * @c: The character to check.
 *
 * Return: 1 if it's a whitespace character, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * letter_lend - Calculate the length of a word within a string.
 *
 * @str: The string to work on.
 *
 * Return: The length of the word.
 */
int letter_lend(char *str)
{
	int indices = 0, lend = 0;

	while (*(str + indices) && !is_space(*(str + indices)))
	{
		lend++;
		indices++;
	}

	return (lend);
}

/**
 * add_words_to_array - Add words to the string array.
 *
 * @s: The string array to add words to.
 * @str: The source string to split into words.
 *
 * Return: The number of words added to the array.
 */
int add_words_to_array(char **s, char *str);

/**
 * strtow - Split a string into words.
 *
 * @str: The string to work on.
 *
 * Return: An array of words.
 */
char **strtow(char *str)
{
	char **s = NULL;
	int letter, i, word_count;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	letter = add_words_to_array(s, str);

	if (letter == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char *) * (letter + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	word_count = add_words_to_array(s, str);

	if (word_count < 0)
	{
		for (i = 0; i < letter; i++)
		{
			free(s[i]);
		}
		free(s);
		return (NULL);
	}

	s[word_count] = NULL;
	return (s);
}

/**
 * add_words_to_array - Add words to the string array.
 *
 * @s: The string array to add words to.
 * @str: The source string to split into words.
 *
 * Return: The number of words added to the array.
 */
int add_words_to_array(char **s, char *str)
{
	int i = 0, k, word_count = 0;

	if (s == NULL || str == NULL)
	{
		return (-1);
	}
	
	while (str[i] != '\0')
	{
		if (!is_space(str[i]))
		{
			int j = i;

			while (str[j] != '\0' && !is_space(str[j]))
			{
				j++;
			}

			s[word_count] = malloc(sizeof(char) * (j - i + 1));

			if (s[word_count] == NULL)
			{
				for (k = 0; k < word_count; k++)
				{
					free(s[k]);
				}
				return (-1);
			}

			for (k = 0; k < j - i; k++)
			{
				s[word_count][k] = str[i + k];
			}

			s[word_count][j - i] = '\0';

			i = j;
			word_count++;
		}
		else
		{
			i++;
		}
	}

	return (word_count);
}
