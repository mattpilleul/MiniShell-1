##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## compiles my libmy
##

NAME	=	libmy.a

SRC	=	my_getnbr.c					\
		my_putchar.c				\
		my_put_nbr.c				\
		my_putstr.c					\
		my_putstrc.c    \
		my_strlen2.c    \
		my_putstr2.c    \
		my_strcat.c					\
		my_strcmp.c					\
		my_strcpy.c					\
		my_strlen.c					\
		my_strncmp.c				\
		my_strdup.c					\
		my_str_to_word_array.c		\
		my_show_word_array.c		\
		my_revstr.c \

CFLAGS	=	-W -Wall -Wextra -I ../../include

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

AR	=	ar rc

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(AR) $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(OBJS)
		$(RM) $(NAME)

re:		fclean all
