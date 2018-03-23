/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** proto
*/

#include <stdlib.h>
#ifndef _MY_H_
#define _MY_H_
#define my_printf my_printf

void my_printf(const char *format, ...);
int my_str_isnum(char const *str);
void *my_calloc(size_t nmemb, size_t size);
int my_strlen(char *str);
int my_atoi(char *str);

#endif /* !MY_H_ */
