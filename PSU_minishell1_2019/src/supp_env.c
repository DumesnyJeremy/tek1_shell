/*
** EPITECH PROJECT, 2019
** get
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

int find_the_size(head_t *l_a)
{
    int size = 0;
    node_t *temp = l_a->begin;
    while (temp != NULL) {
        temp = temp->next;
        size++;
    }
    return size;
}

int find_the_unset(head_t *l_a, char *str, char **tt, int pos)
{
    node_t *temp = l_a->begin;
    int place = 0;

    for (;temp != NULL; place++, temp = temp->next) {
        char **f_path = my_str_to_wa(temp->data);
        if (my_strcmp(l_a->array[pos], f_path[0]) == 0)
            break;
        else
            continue;
    }
    return (place);
}

void linked_to_char(head_t *l_a)
{
    node_t *temp = l_a->begin;
    l_a->env = malloc(sizeof(char *) * 1000);
    for (int a = 0; temp != NULL; a++) {
        l_a->env[a] = temp->data;
        temp = temp->next;
    }
}

void algue(head_t *l_a, int place, int max, node_t *temp)
{
    if (place != 0 && place < max - 1) {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }
    if (place == 0) {
        temp->next->prev = NULL;
        l_a->begin = temp->next;
    }
    if (place == max - 1) {
        temp->prev->next = NULL;
        l_a->end = temp->prev;
    }
}

char **supp_env(head_t *l_a, char *str, char **tt, char **envp)
{
    int pos = 1;
    while (l_a->array[pos] != NULL) {
        node_t *temp = l_a->begin;
        int max = find_the_size(l_a);
        int place = find_the_unset(l_a, str, tt, pos);
        int save = place;
        for (; save != 0; save--) {
            temp = temp->next;
        }
        algue(l_a, place, max, temp);
        free(temp);
        linked_to_char(l_a);
        pos++;
    }
    return;
}