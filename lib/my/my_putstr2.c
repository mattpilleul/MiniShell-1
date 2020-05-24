/*
** EPITECH PROJECT, 2020
** Project
** File description:
** putstr2
*/

#include "../../include/minishell.h"
#include "../../include/my.h"

void my_putstr2(char const *string)
{
    write(1, string, my_strlen2(string));
}
