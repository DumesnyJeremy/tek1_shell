/*
** EPITECH PROJECT, 2019
** get
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

void add_env(head_t *l_a, char *str, char **tt, char **envp)
{
    char *temp = malloc(sizeof(char *) * 1000);
    int yes = 0;
    for (int i = 0; l_a->array[1][i] != '\0'; i++) {
        if ((l_a->array[1][i] >= 'a' && l_a->array[1][i] <= 'z') ||
        (l_a->array[1][i] >= 'A' && l_a->array[1][i] <= 'Z') ||
        (l_a->array[1][i] >= '0' && l_a->array[1][i] <= '9') ||
        (l_a->array[1][i] == '_')) {
            yes++;
        }
    }
    if (yes != my_strlen2(l_a->array[1])) {
        my_printf("invalid character\n");
        return;
    }
    my_strcpy2(temp, l_a->array[1]);
    my_strcat2(temp, "=");
    if (l_a->array[2] != NULL)
        my_strcat2(temp, l_a->array[2]);
    l_a = get_n_node(my_strcpy(temp), l_a);
}