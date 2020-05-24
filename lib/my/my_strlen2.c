/*
** EPITECH PROJECT, 2020
** Project
** File description:
** strlen2
*/

#include "../../include/minishell.h"
#include "../../include/my.h"

int my_strlen2(const char *str)
{
    int i;

    if (str == NULL) {
        my_putstrc("[ ERROR ] [ my_strlen ] String is NULL\n", RED, true);
        return (0);
    }
    for (i = 0; str[i]; ++i);
    return (i);
}
