/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include "../../include/my.h"
#include <unistd.h>

void my_puterror(char *str)
{
    write(2, str, my_strlen(str));
}
