/*
** EPITECH PROJECT, 2020
** strcat
** File description:
** concatenates two strings
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char *src)
{
    int i = my_strlen(dest);
    int j = 0;

    while (src[j]){
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
