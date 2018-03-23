/*
** EPITECH PROJECT, 2018
** scan_map
** File description:
** scan map
*/

#include "matchstick.h"

int check_line_stat(buffer_t *param)
{
	int count = 0;

	for (int line = 0; line < param->line; line++)
		if (param->intab[line][0] > 1)
			count++;
	return (count);
}

int one_pip_line(buffer_t *param)
{
	int count = 0;

	for (int y = 0; y < param->line - 1; y++)
		if (param->intab[y][0] == 1)
			count++;
	return (count);
}

int last(buffer_t *param)
{
	int count = 0;

	for (int line = 0; line < param->line; line++)
		if (param->intab[line][0] >= 1)
			count++;
	return (count);
}
