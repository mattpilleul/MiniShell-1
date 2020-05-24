/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/minishell.h"
#include <stdlib.h>
#include <fcntl.h>

int builtins(char **tab, char ***env)
{
    if (my_strcmp(tab[0], "exit") == 0){
        tab_free(tab);
        my_putstr("exit\n");
        exit(0);
    }
    if (my_strcmp(tab[0], "unsetenv") == 0){
        (*env) = unsetenv_command(tab, *env);
        return (0);
    }
    if (my_strcmp(tab[0], "setenv") == 0){
        (*env) = my_setenv(tab, *env);
        return (0);
    }
    if (my_strcmp(tab[0], "env") == 0){
        env_display(*env);
        return (0);
    }
    return (1);
}
