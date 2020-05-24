/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include "../../include/my.h"
#include "../../include/minishell.h"

int env_display(char **env)
{
    int i;

    for (i = 0; env[i]; i++){
        my_putstr(env[i]);
        my_putstr("\n");
    }
    if (env[0] == NULL){
        my_puterror("The environment is empty.\n");
        return (84);
    }
}
