##
## EPITECH PROJECT, 2020
## Project
## File description:
## basics
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"
WARNING				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[33m $1\x1b[0m"
ATTENTION			= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
ERROR				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
DONE				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[34m $1\x1b[0m"

## ========================================================================== ##
## ========================================================================== ##
PATH_MAIN		=	./src/main/
MAIN			=	main.c  \


## ========================================================================== ##
## ========================================================================== ##
PATH_MINI		=	./src/do_minishell/
MINI	    	=	do_minishell.c								\
                check_env.c \
                free_tab.c  \
                get_player_input.c  \
                tab_size.c  \


## ========================================================================== ##
## ========================================================================== ##
PATH_CD		=	./src/cd/
CD				=	cd.c								\
                    change_new_pwd.c    \
                    change_old_pwd.c    \
                    change_pwd_add.c \
                    change_pwd_remove.c \
                    check_tab.c \
                    my_cd.c \
                    my_cd_old_pwd.c \
                    simple_cd.c \


## ========================================================================== ##
## ========================================================================== ##
PATH_CDH		=	./src/cd_home/
CDH				=	cd_home.c								\


## ========================================================================== ##
## ========================================================================== ##
PATH_ENV		=	./src/env/
ENV				=	check_alphanum.c								\
                    fill_str.c  \
                    my_setenv.c \
                    print_env.c \
                    unsetenv.c  \


## ========================================================================== ##
## ========================================================================== ##
PATH_EX		=	./src/exec/
EX				=	check_exec.c								\
                    check_signal.c  \
                    exec.c  \


## ========================================================================== ##
## ========================================================================== ##
PATH_UT		=	./src/utils/
UT				=	check_builtins.c								\
                    check_path.c    \
                    find_good_path.c    \
                    get_path.c  \
                    my_getenv.c \
                    my_realloc.c    \
                    my_puterror.c   \


## ========================================================================== ##
## ========================================================================== ##
PATH_GNL		=	./src/get_next_line/
GNL				=	get_next_line.c \


## ========================================================================== ##
## ========================================================================== ##
PATH_LIB		=	./lib/my/
LIB				=	my_getnbr.c					\
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


## ========================================================================== ##
SRC				=	$(addprefix $(PATH_MAIN), $(MAIN))				\
					$(addprefix $(PATH_MINI), $(MINI))			\
					$(addprefix $(PATH_ENV), $(ENV))		\
					$(addprefix $(PATH_EX), $(EX))		\
					$(addprefix $(PATH_UT), $(UT))		\
					$(addprefix $(PATH_GNL), $(GNL))		\
					$(addprefix $(PATH_LIB), $(LIB))

CC  =   gcc

BIN	=	mysh

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -g

all:	$(BIN)

$(BIN):	$(OBJ)
	$(CC) -o $(BIN) $(OBJ) $(CFLAGS)
	@$(call SUCCESS, "The binary has been created correctly.")

clean:
	rm -f $(OBJ)
	rm -f lib/my/*.o
	@$(call DONE, "[ DONE 100% ]")

fclean:	clean
	rm -f $(BIN)
	@$(call SUCCESS, "[ DONE ] All library cleaned.")

re:	fclean all
