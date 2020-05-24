/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include <unistd.h>
#include "../../include/minishell.h"
#include "../../include/my.h"
#include <stdlib.h>

char *fill_str(char **tab, char *string)
{
    if (tab[2] == NULL){
        string = malloc(sizeof(char) * (my_strlen(tab[1]) + 2));
        string = my_strcpy(string, tab[1]);
        string = my_strcat(string, "=");
    } else {
        string = malloc(sizeof(char) *\
        (my_strlen(tab[1]) + my_strlen(tab[2]) + 2));
        string = my_strcpy(string, tab[1]);
        string = my_strcat(string, "=");
        string = my_strcat(string, tab[2]);
    }
    return (string);
}
