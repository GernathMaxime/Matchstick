/*
** EPITECH PROJECT, 2018
** get_request.c
** File description:
** get request
*/

#include "my.h"
#include "matchstick.h"
#include "define.h"
#include "gnl.h"
#include <unistd.h>

int get_line(buffer_t *param)
{
	char *s;
	int y;

	my_printf("Line: ");
	if (!(s = get_next_line(0)))
		return (-2);
	y = my_atoi(s);
	if (my_str_isnum(s) == 0 || y < 0) {
		my_printf(ERRORNUM);
		return (-1);
	}
	if (y > param->line || y == 0) {
		my_printf(OUTRG);
		return (-1);
	}
	return (y);
}

int check_match(buffer_t *param, int x, int y)
{
	int pip = 0;

	if (x > param->max) {
		my_printf(TOOMUCH, param->max);
		return (-1);
	}
	for (int i = 0; param->tab[y][i]; i++)
		if (param->tab[y][i] == '|')
			pip++;
	if (x > pip) {
		my_printf(NOPIP);
		return (-1);
	}
	return (x);
}

int get_match(buffer_t *param, int y)
{
	char *s;
	int match;

	write(1, "Matches: ", 9);
	if (!(s = get_next_line(0)))
		return (-2);
	match = my_atoi(s);
	if (my_str_isnum(s) == 0 || y < 0) {
		my_printf(ERRORNUM);
		return (-1);
	}
	if (match == 0) {
		my_printf(ZEROSTICK);
		return (-1);
	}
	if (check_match(param, match, y) < 0)
		return (-1);
	return (match);
}
