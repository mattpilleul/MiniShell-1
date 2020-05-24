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

int alpha_check(char c)
{
    if ((c <= 9 && c >= 0) || (c <= 'z' && c >= 'a') \
    || (c <= 'Z' && c >= 'A') || c == '_'){
        return (0);
    }
    return (84);
}
