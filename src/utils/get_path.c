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

char *get_path(char *string, char **env)
{
    int i = 0;
    char **path = NULL;
    char *correct_path = NULL;

    if ((i = get_env("PATH=", env)) >= 0){
        path = my_str_to_word_array(env[i] + 5);
    } else {
        return (my_strdup(string));
    }
    i = 0;
    while (path[i]){
        if ((correct_path = get_correct_path(string, path[i], env)) != NULL){
            tab_free(path);
            return (correct_path);
        }
        free(correct_path);
        i++;
    }
    return (my_strdup("NOT FOUND"));
}
