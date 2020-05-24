/*
** EPITECH PROJECT, 2020
** strdup
** File description:
** alloc and copy string
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    char *tmp = malloc(sizeof(char) *my_strlen(src) + 1);

    if (src == NULL){
        return (NULL);
    }
    return (my_strcpy(tmp, src));
}
