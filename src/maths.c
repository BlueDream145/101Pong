/*
** EPITECH PROJECT, 2017
** maths.c
** File description:
** 
*/

#include <stdio.h>
#include <math.h>
#include "pong.h"

double ball_reach_bat(void)
{
	double angle = ball_incidence_angle();

	if ((-ball2.z / speed.z < 0) || (speed.z == 0 && ball2.z != 0))
		return (-42.42);
	return (angle);
}

double ball_incidence_angle(void)
{
	return (90
	- (acos(fabs(speed.z)
	/ sqrt(pow(speed.x, 2)
	+ pow(speed.y, 2)
	+ pow(speed.z, 2))))
	* 180
	/ M_PI);
}
