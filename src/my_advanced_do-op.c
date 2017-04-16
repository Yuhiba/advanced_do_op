#include "my.h"
#include "my_opp.h"

int my_add(int left, int right)
{
	my_put_nbr(left + right);
	return 0;
}

int my_sub(int left, int right)
{
	my_put_nbr(left - right);
	return 0;
}

int my_mul(int left, int right)
{
	my_put_nbr(left * right);
	return 0;
}

int my_div(int left, int right)
{
	if (right)
	{
		my_put_nbr(left / right);
		return 0;
	}
	my_putstr("Stop : division by Zero\n");
	return -1;
}

int my_mod(int left, int right)
{
	if (right)
	{
		my_put_nbr(left % right);
		return 0;
	}
	my_putstr("Stop : modulo by Zero\n");
	return -1;
}

int my_usage(int left, int right)
{
	my_putstr("error : only [ + - / * % ] are supported\n");
	return left - right;
}
