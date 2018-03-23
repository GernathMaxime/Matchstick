/*
** EPITECH PROJECT, 2017
** my_atoi
** File description:
** atoi
*/

int my_atoi(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			i = i * 10;
			i = i + *str - 48;
		}
		else
			return (i);
		str++;
	}
	return (i);
}
