/*
** EPITECH PROJECT, 2019
** task02
** File description:
** lala
*/

#include "../include/ls.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
}