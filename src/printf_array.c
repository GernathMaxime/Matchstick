/*
** EPITECH PROJECT, 2018
** printf_array.c
** File description:
** printf array
*/

#include "my.h"
#include <unistd.h>

void printf_array(char **array)
{
	for (int i = 0; array[i]; i++)
		my_printf("%s\n", array[i]);
}
