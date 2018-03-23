/*
** EPITECH PROJECT, 2018
** ia
** File description:
** ia
*/

#include "my.h"
#include "matchstick.h"
#include "define.h"

void marienbad(int **tab, int bi, buffer_t *param)
{
	int match = 0;
	int sline = 0;

	for (int line = 0; line < param->line; line++) {
		if (bi == 0 && (tab[line][0] > 0)) {
			match = 1;
			sline = line;
			break;
		}
		if ((bi ^ tab[line][0]) < tab[line][0]) {
			match = (tab[line][0] - (bi ^ tab[line][0]));
			sline = line;
		}
	}
	match = (match > param->max ? param->max : match);
	match = (match <= 0 ? 1 : match);
	delet_pip(param, match, sline + 1);
	param->stick -= match;
	param->intab[sline][0] -= match;
	my_printf(AIRESULT, match, sline + 1);
}

int total(int **tab, int line)
{
	int bi = 0;

	for (int y = 0; y < line; y++)
		bi = bi ^ tab[y][0];
	return (bi);
}

void ialgo(buffer_t *param)
{
	int bi = total(param->intab, param->line);
	int op = one_pip_line(param);

	if (check_line_stat(param) > 1)
		marienbad(param->intab, bi, param);
	else {
		if (one_pip_line(param) == last(param))
			take_the_one(param->intab, param);
		else if (!(op % 2))
			take_all_line(param);
		else
			take_all(param);
	}
}
