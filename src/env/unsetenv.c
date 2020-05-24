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

void unsetenv2(char **tab)
{
    my_putstr(tab[0]);
    my_puterror(": Too few arguments.\n");
}

char **unsetenv_command(char **tab, char **env)
{
    int i;
    int j = 0;
    int k = 0;
    char **tempo = NULL;

    for (i = 0; env[i]; i++);
    tempo = malloc(sizeof(char *) * i);
    if (tab[1] == NULL || (j = get_env(tab[1], env)) < 0){
        unsetenv2(tab);
        return (env);
    }
    i = 0;
    while (env[i]){
        if (i != j){
            tempo[k] = my_strdup(env[i]);
            k++;
        }
        i++;
    }
    tempo[k] = NULL;
    return (tempo);
}
