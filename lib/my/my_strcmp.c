/*
** EPITECH PROJECT, 2020
** strcmp
** File description:
** strcmp
*/

int my_strcmp(char const *str1, char const *str2)
{
    int i = 0;
    int rest = 0;

    while (str1[i] == str2[i] && str1[1] != '\0' && str2[i] != '\0')
        i++;
    if (str1[i] != str2[i]) {
        rest = str1[i] - str2[i];
        return (rest);
    }
    return (0);
}
