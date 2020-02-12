/*
** EPITECH PROJECT, 2019
** get
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

head_t *get_n_node(char *x, head_t *l_a)
{
    node_t *n_node = malloc(sizeof(node_t) + 1);
    if (n_node == 0)
        return NULL;
    n_node->data = x;
    n_node->prev = NULL;
    n_node->next = NULL;
    if (l_a == 0) {
        l_a = malloc(sizeof(head_t) + 1);
        if (l_a == 0)
            return NULL;
        l_a->begin = n_node;
        l_a->end = n_node;
    }
    else {
        l_a->end->next = n_node;
        n_node->prev = l_a->end;
        l_a->end = n_node;
    }
    return l_a;
}

head_t * fill_cl(head_t *l_a, char **envp)
{
    for (int a = 0; envp[a] != NULL; a++)
        l_a = get_n_node(my_strcpy(envp[a]), l_a);
    return (l_a);
}

void tests(head_t *l_a, char **envp, int arg)
{
    char *str = NULL;
    size_t size = 10;
    for (int i = 0, line; !i;) {
        my_putstr("$> ");
        l_a->temp = getline(&str, &size, stdin);
        if (l_a->temp == -1) {
            exit(0);
        }
        if (my_strcmp(str, "\n") == 0) {
            continue;
        }
        linked_to_char(l_a);
        l_a->array = my_str_to_word_array(str);
        line = find_path(envp, l_a);
        char **tt = my_str_twa(l_a->env[line]);
        arg = find_arg(l_a, str, tt, envp);
    }
}

int main (int ac, char **av, char **envp)
{
    head_t *l_a = NULL;
    int arg = 0;
    l_a = fill_cl(l_a, envp);
    tests(l_a, envp, arg);
}