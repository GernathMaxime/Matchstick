/*
** EPITECH PROJECT, 2018
** action.c
** File description:
** action
*/

#include "my.h"
#include "matchstick.h"
#include "define.h"

void take_the_one(int **tab, buffer_t *param)
{
	int line = 0;
	int match = 0;

	for (; line < param->line; line++)
		if ((tab[line][0] == 1)) {
			match = 1;
			break;
		}
	line = (line >= param->line ? param->line - 1 : line);
	match = (match <= 0 ? 1 : match);
	delet_pip(param, match, line + 1);
	my_printf(AIRESULT, match, line + 1);
	param->stick -= match;
	param->intab[line][0] -= match;
}

void take_all_line(buffer_t *param)
{
	int match = 0;
	int line = 0;

	for (; line < param->line; line++) {
		if (param->intab[line][0] > 1) {
			match = param->intab[line][0] - 1;
			match = (match > param->max ? param->max : match);
			break;
		}
	}
	line = (line >= param->line ? param->line - 1 : line);
	match = (match <= 0 ? 1 : match);
	my_printf(AIRESULT, match, line + 1);
	delet_pip(param, match, line + 1);
	param->stick -= match;
	param->intab[line][0] -= match;
}

void take_all(buffer_t * param)
{
	int match = 0;
	int line = 0;

	for (; line < param->line; line++) {
		if (param->intab[line][0] > 1) {
			match = param->intab[line][0];
			match = (match > param->max ? param->max : match);
			break;
		}
	}
	line = (line >= param->line ? param->line - 1 : line);
	match = (match <= 0 ? 1 : match);
	delet_pip(param, match, line + 1);
	my_printf(AIRESULT, match, line + 1);
	param->stick -= match;
	param->intab[line][0] -= match;
}
