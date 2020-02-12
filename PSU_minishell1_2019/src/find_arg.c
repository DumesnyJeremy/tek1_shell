/*
** EPITECH PROJECT, 2019
** get
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

char *print_env(head_t *l_a, char *str)
{
    node_t *temp = l_a->begin;
    while (temp != NULL) {
        my_printf("%s\n", temp->data);
        temp = temp->next;
    }
}

char *argument(head_t *l_a, char *path)
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
        execve(path, l_a->array, l_a->env);
    wait(&pid);
}

void algo(char *str, char **tt, head_t *l_a, char **env)
{
    if (l_a->array[0][0] == '.' && l_a->array[0][1] == '/') {
        if (access(l_a->array[0], F_OK) == 0)
            argument(l_a, l_a->array[0]);
    }
    else {
        int yes = 0, compt = 1, a = 0, test = 0;
        char **temp = malloc(sizeof(char *) * 1000);
        for (int j = 0; tt[j]; j++) {
        }
        for (; tt[compt] != NULL; compt++, a++) {
            temp[a] = malloc(sizeof(char) * (my_strlen2(tt[compt]) +
            my_strlen2(l_a->array[0]) + 2));
            my_strcpy2(temp[a], tt[compt]);
            my_strcat2(temp[a], "/");
            my_strcat2(temp[a], l_a->array[0]);
        }
        temp[a + 1] = '\0';
        for (a = 0; temp[a] != NULL; a++) {
            if (access(temp[a], F_OK) == 0) {
                yes = a;
                test++;
                break;
            }
        }
        if (test == 0) {
            my_printf("%s: Command not found.\n", l_a->array[0]);
            return;
        }
        char *path = temp[yes];
        argument(l_a, path);
    }
}

int find_arg(head_t *l_a, char *str, char **tt, char **envp)
{
    if (l_a->array[0] == NULL)
        return 2;
    if (my_strcmp(l_a->array[0], "exit") == 0) {
        my_printf("exit\n");
        exit(0);
    }
    if (my_strcmp(l_a->array[0], "env") == 0) {
        print_env(l_a, str);
        return 1;
    }
    if (my_strcmp(l_a->array[0], "unsetenv") == 0) {
        if (my_strcmp(l_a->array[1], "PATH") == 0)
            l_a->path = 1;
        l_a->env = supp_env(l_a, str, tt, envp);
        return 3;
    }
    if (my_strcmp(l_a->array[0], "setenv") == 0) {
        if (my_strcmp(l_a->array[1], "PATH") == 0)
            l_a->path = 0;
        add_env(l_a, str, tt, envp);
        return 3;
    }
    if (l_a->path != 1) {
        algo(str, tt, l_a, envp);
        return 3;
    }
    if (l_a->path == 1)
        my_printf("%s: Command not found.\n", l_a->array[0]);
}