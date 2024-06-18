/*
** EPITECH PROJECT, 2017
** pong.h
** File description:
** 
*/

struct ball
{
	double x;
	double y;
	double z;
} ball1, ball2, speed, new_ball;

struct ball ball_instance_from_char(struct ball b, char *x, char *y, char *z);
struct ball ball_instance_from_double(struct ball b, double x, double y,
	double z);
double ball_reach_bat();
double ball_incidence_angle();
void report_error(char *str);
int my_strlen(char const *str);
void process(int time_shift);
char *check(char *str, int allow_decimal);
