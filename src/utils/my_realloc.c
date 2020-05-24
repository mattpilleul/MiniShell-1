/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

#include <stddef.h>
#include <stdlib.h>
#include "../../include/my.h"

char *my_realloc(char *length, size_t numadd)
{
    char *line_start;
    int size = 0;
    int i = 0;

    while (length[size] != 0)
        size++;
    if ((line_start = malloc(sizeof(char) * (size + numadd + 2))) == NULL)
        return (NULL);
    while (i < size){
        line_start[i] = length[i];
        i++;
    }
    while (i < (size + (int)numadd + 2))
        line_start[i++] = 0;
    free(length);
    return (line_start);
}
