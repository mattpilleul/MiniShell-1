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

char *control_d(void)
{
    char *line = NULL;
    size_t length = 0;
    int resultat = getline(&line, &length, stdin);

    if (resultat == -1){
        return (NULL);
    }
    return (line);
}
