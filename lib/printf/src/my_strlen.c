/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** str len
*/

#include <unistd.h>

int my_strlen(char const *str)
{
	int i;

	if (str == NULL)
	  return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
