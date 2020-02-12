/*
** EPITECH PROJECT, 2019
** get
** File description:
** D.Jeremy
*/

#include "../include/ls.h"

int find_path(char **envp, head_t *l_a)
{
    for (int line = 0, car = 0, compt = 0; l_a->env[line] != NULL; line++) {
        compt = 0;
        car = 0;
        if (l_a->env[line][car] == 'P') {
            compt++;
            car++; }
        if (l_a->env[line][car] == 'A') {
            compt++;
            car++; }
        if (l_a->env[line][car] == 'T') {
            compt++;
            car++; }
        if (compt == 3) {
            return (line);
        }
    }
}