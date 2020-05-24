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

void splitter6(char *path)
{
    my_putstr(path);
    my_puterror(" Exec format error. Wrong Architecture.\n");
}

void minishell(char **tab, char **env, char *path)
{
    pid_t pid;

    if (check_exec(tab, path) != 0){
        return;
    }
    if ((pid = fork()) == -1){
        perror("fork");
        exit(84);
    }
    if (pid == 0){
        if (execve(path, tab, env) == -1){
            splitter6(path);
            exit(84);
        }
    } else {
        check_signal();
    }
}
