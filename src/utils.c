/*
** EPITECH PROJECT, 2017
** main.c
** File description:
**
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pong.h"

void report_error(char *str)
{
	write(2, str, my_strlen(str));
	exit(84);
}

int my_strlen(char const *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;
	return (count);
}
