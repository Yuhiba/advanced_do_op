#include <stdio.h>

#include "my.h"
#include "my_opp.h"

t_opp gl_opptab[MAX_OPP] = {
	{"+", &my_add},
	{"-", &my_sub},
	{"/", &my_div},
	{"*", &my_mul},
	{"%", &my_mod},
	{"", &my_usage},
};

void advanced_do_op(int left, char *operator, int right)
{
	int i;

	i = 0;
	while (i < MAX_OPP)
	{
		if (my_strncmp(operator, gl_opptab[i].operator, 1)== 0)
		{
			gl_opptab[i].do_op(left, right);
			i = MAX_OPP;
		}
		else if (i == (MAX_OPP - 1))
			gl_opptab[i].do_op(left, right);
		i += 1;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 4)
		advanced_do_op(my_getnbr(argv[1]), argv[2] , my_getnbr(argv[3]));
	else
		my_putstr("ERROR - not enough arguments.\n");
	return 0;
}
