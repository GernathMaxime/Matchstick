/*
** EPITECH PROJECT, 2018
** delet_pip.c
** File description:
** delet pip
*/

#include "matchstick.h"

void delet_pip(buffer_t *param, int match, int y)
{
	int j = (2 * (param->line - 1)) + 1;

	for (int i = j; param->tab[y][i] != '|' && i > 0; i--, j--);
	for (int i = 0; i < match && (j - i) > 0; i++)
		param->tab[y][j - i] = ' ';
}
