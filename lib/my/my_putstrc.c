/*
** EPITECH PROJECT, 2020
** Project
** File description:
** color
*/

#include "../../include/minishell.h"
#include "../../include/my.h"

char *my_putstrc(char *str, char *color, _Bool bold)
{
    my_putstr2(color);
    if (bold == true)
        my_putstr2(BOLD);
    write(1, str, my_strlen2(str));
    my_putstr2(RESET);
    return (str);
}
