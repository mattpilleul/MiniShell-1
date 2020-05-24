/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <math.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <sys/wait.h>
#include <errno.h>
#include <limits.h>
#include "../../include/my.h"
#include <stdlib.h>
#include "../../include/minishell.h"

void control_c(int sig)
{
    my_putchar('\n');
    my_putstr("$> ");
}

void minishell_loop(char **env)
{
    char **tab = NULL;
    char *str = NULL;
    char *path = NULL;
    char *act_pwd;

    signal(SIGINT, &control_c);
    while (1){
        my_putstr("$> ");
        if ((str = control_d()) == NULL){
            exit(0);
        }
        tab = my_str_to_word_array(str);
        if (tab[0] != NULL){
            path = get_path(tab[0], env);
            builtins(tab, &env) != 0 ? minishell(tab, env, path) : 0;
            free(path);
        }
        tab_free(tab);
        free(str);
    }
}
