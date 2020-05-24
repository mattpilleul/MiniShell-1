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

int get_env(char *word, char **env)
{
    int length = my_strlen(word) + 1;
    char *lookup = malloc(sizeof(char) * length);
    int i = 0;

    if (lookup == NULL){
        return (84);
    }
    lookup = my_strcpy(lookup, word);
    while (env[i]){
        if (my_strncmp(env[i], lookup, my_strlen(word)) == 0) {
            free(lookup);
            return (i);
        }
        i++;
    }
    free(lookup);
    return (84);
}
