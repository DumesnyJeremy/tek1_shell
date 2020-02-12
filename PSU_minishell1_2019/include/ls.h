/*
** EPITECH PROJECT, 2019
** h
** File description:
** h
*/

#ifndef READ_SIZE
#define READ_SIZE 1
#endif

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <pwd.h>
#include <grp.h>
#include <dirent.h>
#include <time.h>
# include <signal.h>

typedef struct node_s
{
    char *data;
    struct node_s *next;
    struct node_s *prev;
} node_t;

typedef struct head_s
{
    int path;
    int temp;
    char **env;
    char **array;
    node_t *begin;
    node_t *end;
} head_t;

int n_alphanum(char c);
int n_my_w_len(char const *str, int letter);
int n_compt_word(char const *str);
char **my_str_twa(char const *str);
int find_path(char **envp, head_t *l_a);
void linked_to_char(head_t *l_a);
void add_env(head_t *l_a, char *str, char **tt, char **envp);
head_t *get_n_node(char *x, head_t *l_a);

int alphanum(char c);
int my_w_len(char const *str, int letter);
char **my_str_to_word_array(char const *str);
int compt_word(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char const *src);
int find_arg(head_t *l_a, char *str, char **tt, char **);
char *print_env(head_t *l_a, char *str);

int my_strlen2(char const *str);
char **get_next(char const *filepath);
char *my_strcat2(char *dest, char const *src);
int my_strlen(char const *str, int i, int a);
char *my_strcat(char *dest, char *st, int *a);
int bs(char *file);

char **supp_env(head_t *l_a, char *str, char **tt, char **envp);
int find_the_unset(head_t *l_a, char *str, char **tt, int);
char **my_str_to_wa(char const *str);

char *get_next_line(int fd);
char *my_strcpy2(char *dest, char const *src);

typedef void (*p_fonct)();

char *my_revstr(char *str);
void my_printf(char const *str, ...);
int my_strncmp(char const *s1, char const *s2, int n);
void my_put_nbr_l(long nb);
void my_put_nbr(int);
void my_put_nbr_o(int);
void my_put_nbr_x(int);
void my_put_nbr_xmaj(int);
void my_put_nbr_b(int nb);
void my_put_nbr_u(unsigned int nb);
void my_put_nbr_lx(long nb);
void my_put_nbr_lxmaj(long nb);
void my_put_nbr_p(long long int nb);
void my_put_p(long long int nb);

#endif