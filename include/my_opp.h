#ifndef MY_OOP_H_
#define MY_OOP_H_

typedef struct s_opp {
	char *operator;

	int (*do_op)(int, int);
} t_opp;

#define MAX_OPP 6

int my_add(int, int);
int my_sub(int, int);
int my_div(int, int);
int my_mul(int, int);
int my_mod(int, int);
int my_usage(int, int);

#endif