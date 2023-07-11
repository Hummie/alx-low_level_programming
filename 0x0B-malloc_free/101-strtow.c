#include "main.h"
#include <stdlib.h>
char **strtow(char *str)
{
	int i, j, k, word_cnt = 0, word_len = 0, current_word = 0;
	char **p;

	if ( str == NULL || *str == '\0')
		return (NULL);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			word_cnt++;
		while (str[i] != ' ' && str[i])
			i++;
		if (!(str[i]))
			break;
	}
	if (word_cnt == 0)
		return (NULL);
	p = malloc(sizeof(char *) * (word_len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = i; current_word < word_cnt; i++, word_len = 0, j = i)
	{
		if (str[i] == ' ')
			continue;
		while (str[j] != ' ' && str[j])
			word_len++;
		p = malloc(sizeof(char) * (word_len + 1));
		if (!p[current_word])
		{
			while (current_word-- >= 0)
				free(p[current_word]);
			free(p);
			return (NULL);
		}
		for (k = 0; k < j; k++, j++)
			p[current_word][k] = str[i];
		p[current_word++][k] = '\0';
	}
	p[current_word] = NULL;
	return (p);
}

		
