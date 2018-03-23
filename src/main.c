/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <unistd.h>
#include "matchstick.h"
#include "define.h"
#include "my.h"

int main(int ac, char **av)
{
	buffer_t param;
	int i = 0;

	if (ac != 3)
		return (84);
	if (init_struct(ac, av, &param) < 0)
		return (84);
	if ((i = start(param)) == 84)
		return (0);
	printf_array(param.tab);
	(i == 1 ? my_printf(WIN) : my_printf(DEFET));
	return (i);
}
