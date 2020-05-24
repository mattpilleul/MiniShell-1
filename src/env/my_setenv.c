/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include <unistd.h>
#include "../../include/minishell.h"
#include "../../include/my.h"
#include <stdlib.h>

void setenv_checker(char **tab)
{
    my_puterror("setenv: Variable name ");
    my_puterror("must contain alphanumeric characters.\n");
}

int setenv_command(char **tab)
{
    int i = 0;

    while (tab[1][i]){
        if (alpha_check(tab[1][i]) != 0){
            setenv_checker(tab);
            return (84);
        }
        i++;
    }
    return (0);
}

char **my_setenv(char **tab, char **env)
{
    int i = 0;
    char **tempo = NULL;
    char *str = NULL;

    if (tab[1] == NULL){
        env_display(env);
        return (env);
    }
    if (setenv_command(tab) == -1)
        return (env);
    while (env[i])
        i++;
    tempo = malloc(sizeof(char *) * (i + 2));
    i = 0;
    while (env[i]){
        tempo[i] = my_strdup(env[i]);
        i++;
    }str = fill_str(tab, str);
    tempo[i] = my_strdup(str);
    tempo[i + 1] = NULL;
    return (tempo);
}
