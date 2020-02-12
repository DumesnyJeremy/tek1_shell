/*
** EPITECH PROJECT, 2019
** word_array
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

int compt_word(char const *str)
{
    int nbr_w = 0;
    for (int a = 0; str[a] != '\0';) {
        if (alphanum(str[a]) == 1)
            nbr_w += 1;
        for (;str[a] != '\0' && alphanum(str[a]) == 1; a++);
        if (str[a] != '\0')
            a++;
    }
    return (nbr_w);
}