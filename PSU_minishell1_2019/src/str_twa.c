/*
** EPITECH PROJECT, 2019
** word_array
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

int n_alphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
    (c >= '0' && c <= '9') || c == '/' || c == '.')
        return 1;
    else
        return 0;
}

int n_my_w_len(char const *str, int letter)
{
    int count = 0;
    for (count = 0; n_alphanum(str[letter]) == 1; letter++, count++);
    return (count);
}

int n_compt_word(char const *str)
{
    int nbr_w = 0;
    for (int a = 0; str[a] != '\0';) {
        if (n_alphanum(str[a]) == 1)
            nbr_w += 1;
        for (;str[a] != '\0' && n_alphanum(str[a]) == 1; a++);
        if (str[a] != '\0')
            a++;
    }
    return (nbr_w);
}

char **my_str_twa(char const *str)
{
    char **array = malloc(sizeof(char *) * (n_compt_word(str) + 1));
    int i = 0;

    for (int k = 0, a; i != n_compt_word(str); i++) {
        a = 0;
        for (; n_alphanum(str[k]) == 0; k++);
        array[i] = malloc(sizeof(char) * (n_my_w_len(str, k) + 1));
        for (; n_alphanum(str[k]) == 1; k++, a++)
            array[i][a] = str[k];
        array[i][a] = '\0';
    }
    array[i] = NULL;
    return (array);
}