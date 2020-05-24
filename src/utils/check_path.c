/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/minishell.h"
#include <stdlib.h>
#include <fcntl.h>

int check_correct_path(char *string, char **env)
{
    int i = 0;
    char *path = NULL;

    if ((i = get_env("PWD=", env)) < 0){
        return (84);
    }
    path = malloc(sizeof(char) * \
    (my_strlen(env[i] + 4) + my_strlen(string) + 2));
    if (path == NULL){
        return (84);
    }
    path = my_strcpy(path, (env[i] + 4));
    path = my_strcat(path, "/");
    path = my_strcat(path, string);
    if (open(path, O_RDONLY) != -1 || open(string, O_RDONLY) != -1){
        return (0);
    }
    return (84);
}
