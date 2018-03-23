/*
** EPITECH PROJECT, 2018
** init_struct.c
** File description:
** init_struct.c
*/

#include "matchstick.h"
#include "my.h"

void int_tab(buffer_t *param, int line)
{
	param->intab = malloc(sizeof(int *) * line);
	for (int i = 0; i < line; i++) {
		param->intab[i] = malloc(sizeof(int));
		param->intab[i][0] = (i + 1) * 2 - 1;
	}
}

int init_struct(int ac, char **av, buffer_t *param)
{
	if (ac != 3)
		return (-1);
	param->line = my_atoi(av[1]);
	param->max = my_atoi(av[2]);
	if (param->line < 2 || param->line > 100 || param->max < 1)
		return (-1);
	if (!my_str_isnum(av[1]) && !my_str_isnum(av[2]))
		return (-1);
	if (!(param->tab = creat_map(param->line)))
		return (-1);
	param->stick = param->line * param->line;
	int_tab(param, param->line);
	return (0);
}
