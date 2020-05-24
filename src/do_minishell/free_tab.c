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

void tab_free(char **tab)
{
    int i = 0;

    while (tab[i]){
        free(tab[i]);
        i++;
    }
    free(tab);
}
