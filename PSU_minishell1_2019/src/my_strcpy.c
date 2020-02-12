/*
** EPITECH PROJECT, 2019
** Task01
** File description:
** Cpy
*/

#include "../include/ls.h"

char *my_strcpy2(char *dest, char const *src)
{
    int i = 0;
    while (src[i]  != '\0') {
        dest[i] = src[i];
        i++;
            }
    dest[i] = '\0';
    return (dest);
}
