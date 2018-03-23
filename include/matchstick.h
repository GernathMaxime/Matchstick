/*
** EPITECH PROJECT, 2018
** matchstick.h
** File description:
** proto
*/

#ifndef _MATCH_STICK_H_
#define _MATCH_STICK_H_

typedef struct buffer_s
{
	int line;
	int max;
	int stick;
	char **tab;
	int **intab;
}buffer_t;

int init_struct(int ac, char **av, buffer_t *param);
char **creat_map(int line);
int start(buffer_t param);
void printf_array(char **array);
int get_match(buffer_t *param, int y);
int get_line(buffer_t *param);
void delet_pip(buffer_t *param, int match, int y);
void take_the_one(int **tab, buffer_t *param);
void take_all_line(buffer_t *param);
void take_all(buffer_t * param);
int check_line_stat(buffer_t *param);
int one_pip_line(buffer_t *param);
int last(buffer_t *param);
void ialgo(buffer_t *param);

#endif /* !MATCH_STICK_H_ */
