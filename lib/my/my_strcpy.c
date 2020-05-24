/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copies a string into another
*/

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (; src[i]; i++){
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
