/*
** EPITECH PROJECT, 2020
** strncmp
** File description:
** strncmp
*/

int my_strncmp(char *str1, char *str2, int n)
{
    int i = 0;

    while (str1[i] == str2[i] && i < n - 1 \
        && str1[i] != '\0' && str2[i] != '\0')
        i++;
    return (str1[i] - str2[i]);
}
