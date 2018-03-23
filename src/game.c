/*
** EPITECH PROJECT, 2018
** game.c
** File description:
** game
*/

#include "my.h"
#include "matchstick.h"
#include "define.h"
#include <unistd.h>

int request(buffer_t *param)
{
	int line;
	int match;

	if ((line = get_line(param)) == -1)
		return (1);
	if (line == -2)
		return (84);
	if ((match = get_match(param, line)) == -1)
		return (1);
	if (match == -2)
		return (84);
	my_printf("Player ");
	delet_pip(param, match, line);
	param->stick -= match;
	param->intab[line - 1][0] -= match;
	my_printf(RESULT, match, line);
	return (0);
}

void ia(buffer_t *param)
{
	printf_array(param->tab);
	my_printf("\nAI\'s turn...\n");
	ialgo(param);
}

int player(buffer_t *param)
{
	int j = 0;
	int i = 0;

	printf_array(param->tab);
	my_printf("\nYour turn:\n");
	while (j != 1) {
		if ((i = request(param)) == 0)
			j = 1;
		if (i == 84)
			return (84);
	}
	return (0);
}

int start(buffer_t param)
{
	int i = 0;

	while (param.stick != 0) {
		if ((player(&param)) == 84)
			return (84);
		if (param.stick == 0)
			return (2);
		ia(&param);
		i = 1;
	}
	return (i);
}
