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
#include <unistd.h>
#include <sys/stat.h>

void status11(void)
{
    my_puterror("Segmentation fault\n");
}

void status8(void)
{
    my_puterror("Floating exception\n");
}

void check_signal(void)
{
    int status;

    wait(&status);
    if (WIFSIGNALED(status)){
        if (WTERMSIG(status) == 11){
            status11();
        }
        if (WTERMSIG(status) == 8){
            status8();
        }
        if (WTERMSIG(status) == 139){
            status11();
        }
        if (WTERMSIG(status) == 136){
            status8();
        }
    }
}
