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

void splitter3(char **env)
{
    char **tab;
    char *str1;
    char *str2;
    int j = 0;

    str1 = malloc(sizeof(char) * (my_strlen(env[j] + 4) + 15));
    str1 = my_strcpy(str1, "setenv OLDPWD ");
    str2 = my_strdup(env[j] + 4);
    str1 = my_strcat(str1, str2);
    tab = my_str_to_word_array(str1);
    env = my_setenv(tab, env);
}

char **check_for_env(char **env)
{
    int i = 0;
    char **tab = NULL;
    char *str1 = NULL;
    char *str2 = NULL;
    int j = 0;

    if ((i = get_env("OLDPWD=", env)) < 0){
        if ((j = get_env("PWD=", env)) < 0){
            return (env);
        }
        splitter3(env);
    }
    return (env);
}
