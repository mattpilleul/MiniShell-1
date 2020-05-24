/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <signal.h>
#include "../../include/my.h"
#include "../../include/minishell.h"
#include <unistd.h>
#include <sys/stat.h>

void splitter4(char **tab)
{
    my_putstr(tab[0]);
    my_puterror(": Command not found.\n");
}

void splitter5(char **tab)
{
    my_putstr(tab[0]);
    my_puterror(": Permission denied.\n");
}

int check_exec(char **tab, char *path)
{
    struct stat sig;

    if (my_strcmp(path, "NOT FOUND") == 0){
        splitter4(tab);
        return (84);
    }
    sig.st_mode = 0;
    stat(tab[0], &sig);
    if (S_ISDIR(sig.st_mode)){
        splitter5(tab);
        return (84);
    }
    return (0);
}

