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

char *get_correct_path(char *string, char *path, char **env)
{
    char *correct_path = malloc(sizeof(char)\
    * (my_strlen(string) + my_strlen(path) + 2));

    if (correct_path == NULL){
        return (NULL);
    }
    if (check_correct_path(string, env) == 0){
        return (my_strdup(string));
    }
    correct_path = my_strcpy(correct_path, path);
    correct_path = my_strcat(correct_path, "/");
    correct_path = my_strcat(correct_path, string);
    if (access(correct_path, X_OK) == 0){
        return (correct_path);
    }
    free(correct_path);
    return (NULL);
}
