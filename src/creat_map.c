/*
** EPITECH PROJECT, 2018
** creat_map.c
** File description:
** creat map
*/

#include <unistd.h>
#include "my.h"

void border(char **tab, int len)
{
	for (int i = 0; i < len; i++)
		tab[0][i] = '*';
}

void middle(char **tab, int len, int line)
{
	int j = 0;

	tab[0][j++] = '*';
	for (int i = 0; i < (len / 2) - ((line - 1) * 2) / 2 - 1; i++, j++)
		tab[0][j] = ' ';
	for (int i = 0; i < ((line - 1) * 2) + 1; i++, j++)
		tab[0][j] = '|';
	for (int i = 0; i < (len / 2) - ((line - 1) * 2) / 2 - 1; i++, j++)
		tab[0][j] = ' ';
	tab[0][j++] = '*';
}

char **creat_map(int line)
{
	char **tab;
	int len = 1 + (2 * (line - 1));

	if (!(tab = my_calloc(sizeof(char *), line + 3)))
		return (NULL);
	for (int i = 0; i < line + 2; i++) {
		tab[i] = my_calloc(sizeof(char), len + 3);
		if (i == 0 || i == line + 1)
			border(&tab[i], len + 2);
		else
			middle(&tab[i], len + 2, i);
	}
	return (tab);
}
