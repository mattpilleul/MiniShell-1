/*
** EPITECH PROJECT, 2020
** Project
** File description:
** basics
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = 0;
    int a = my_strlen(str) -1;
    int b = a/2;
    char ct;

    while (i <= b) {
        ct = str[i];
        str[i] = str[a];
        str[a] = ct;
        a--;
        i++;
    }
    return (str);
}
