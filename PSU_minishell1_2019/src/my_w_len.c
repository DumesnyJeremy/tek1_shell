/*
** EPITECH PROJECT, 2019
** word_array
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

int alphanum(char c)
{
    switch (c)
    {
    case '\n':
    case ' ':
    case '\t':
        return (0);
    
    default:
        return (1);
    }
}

int my_w_len(char const *str, int letter)
{
    int count = 0;
    for (count = 0; alphanum(str[letter]) == 1; letter++, count++);
    return (count);
}