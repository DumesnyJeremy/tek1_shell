/*
** EPITECH PROJECT, 2019
** word_array
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

char **my_str_to_word_array(char const *str)
{
    char **array = malloc(sizeof(char *) * (compt_word(str) + 1));
    int i = 0;
    int k = 0;
    int a = 0;

    for (; i != compt_word(str); i++) {
        a = 0;
        for (; alphanum(str[k]) == 0; k++);
        array[i] = malloc(sizeof(char) * (my_w_len(str, k) + 1));
        for (; alphanum(str[k]) == 1; k++, a++)
            array[i][a] = str[k];
        array[i][a] = '\0';
    }
    array[i] = NULL;
    return (array);
}