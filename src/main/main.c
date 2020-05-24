/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include "../../include/minishell.h"

int main(int ac, char **av, char **env)
{
    if (ac != 1){
        my_puterror("Usage: ./mysh\n");
        return (84);
    }
    (void)av;
    minishell_loop(env);
    return (0);
}
