/*
** EPITECH PROJECT, 2017
** main.c
** File description:
**
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pong.h"

void process(int time_shift)
{
	double angle = ball_reach_bat();

	printf("The speed vector coordinates are :\n(%.2f;%.2f;%.2f)\n",
	speed.x, speed.y, speed.z);
	printf("At time t+%d, ball coordinates will be :\n(%.2f;%.2f;%.2f)\n",
	time_shift, new_ball.x, new_ball.y, new_ball.z);
	if (angle == -42.42)
		printf("The ball won't reach the bat.\n");
	else
		printf("The incidence angle is :\n%.2f degrees\n", angle);
}

int main(int ac, char **as)
{
	int time_shift;

	if (ac != 8)
		report_error("Bad usage.\n");
	time_shift = atof((const char*)check(as[7], 0));
	if (time_shift < 0)
		report_error("Bad usage.\n");
	ball1 = ball_instance_from_char(ball1, check(as[1], 1), check(as[2], 1)
		,check(as[3], 1));
	ball2 = ball_instance_from_char(ball2, check(as[4], 1), check(as[5], 1)
		,check(as[6], 1));
	speed = ball_instance_from_double(speed,
		ball2.x - ball1.x,
		ball2.y - ball1.y,
		ball2.z - ball1.z);
	new_ball = ball_instance_from_double(speed,
		ball2.x + time_shift * speed.x,
		ball2.y + time_shift * speed.y,
		ball2.z + time_shift * speed.z);
	process(time_shift);
	return (0);
}

char *check(char *str, int allow_decimal)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		if (allow_decimal == 1 && ((str[i] <= 'Z' && str[i] >= 'A')
		|| (str[i] <= 'z' && str[i] >= 'a')))
			report_error("Bad syntax.\n");
		else if (allow_decimal == 0 && ((str[i] <= 'Z' && str[i] >= 'A'
		) || (str[i] <= 'z' && str[i] >= 'a') || str[i] == '.'))
			report_error("Bad syntax.\n");
	return (str);
}
