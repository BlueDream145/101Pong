/*
** EPITECH PROJECT, 2017
** instance.c
** File description:
**
*/

#include <stdlib.h>
#include "pong.h"

struct ball ball_instance_from_char(struct ball b, char *x, char *y, char *z)
{
	b.x = atof(x);
	b.y = atof(y);
	b.z = atof(z);
	return (b);
}

struct ball ball_instance_from_double(struct ball b, double x, double y,
	double z)
{
	b.x = x;
	b.y = y;
	b.z = z;
	return (b);
}
