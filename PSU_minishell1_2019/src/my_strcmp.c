/*
** EPITECH PROJECT, 2019
** task06
** File description:
** oui
*/

#include "../include/ls.h"

char *my_strcpy(char const *src)
{
    char *dest = malloc(sizeof(char *) * (my_strlen2(src) + 1));
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
        }
    dest[i] = '\0';
    return (dest);
}

int my_strlen2(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;

    for (; s1[a] == s2[a] && a < n - 1 && s1[a] != '\0'; a++);
    return (s1[a] - s2[a]);
}

int my_strcmp(char const *s1, char const *s2)
{
    for (int a = 0; s2[a] != '\0'; a++)
        if (s1[a] != s2[a])
            return (1);
    if (my_strlen2(s1) != my_strlen2(s2))
        return 2;
    return (0);
}
