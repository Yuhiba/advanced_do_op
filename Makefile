NAME		= my_advanced_do-op

SRC			= src/main.c \
			src/my_advanced_do-op.c \
			tests/test_adv_do_op.c

INCLUDE		= ../../../lib/include

LIBDIR		= ../../../lib/

OBJ			= $(SRC:.c=.o)

CC			= gcc

RM			= rm -f

LDFLAGS		+= -L $(LIBDIR)
CFLAGS		+= -I $(INCLUDE) -Wextra -Wall -Werror
CFLAGS		+= -I include/



all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBDIR)
			$(CC) -o $@ $^ -L $(LIBDIR) -lmy

clean:
			make -C $(LIBDIR) clean
			$(RM) $(OBJ)

fclean:		clean
			make -C $(LIBDIR) fclean
			$(RM) $(NAME)

re: 		fclean all
			make -C $(LIBDIR) re

.PHONY:		all clean fclean re