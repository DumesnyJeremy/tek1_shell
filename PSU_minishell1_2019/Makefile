##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## ouaidiha
##

NAME	=	mysh

SRC	=	src/my_compt_word.c \
		src/my_w_len.c \
		src/str_to_word_array.c \
		src/main.c \
		src/my_putstr.c \
		src/my_strcmp.c \
		src/find_arg.c \
		src/find_path.c \
		src/str_twa.c \
		src/my_strcat.c \
		src/my_getnbr.c \
		src/my_printf.c \
		src/my_put_nbr_b.c \
		src/my_put_nbr_l.c \
		src/my_put_nbr_lx.c \
		src/my_put_nbr_o.c \
		src/my_put_nbr_u.c \
		src/my_put_nbr_x.c \
		src/my_put_nbr_xmaj.c \
		src/my_put_nbr.c \
		src/supp_env.c \
		src/str_to_wa.c \
		src/my_strcpy.c \
		src/add_env.c

OBJ	=	$(SRC:.c=.o)

CFLAGS  +=	-L./ -lmy -I./include -g3

all	:	$(NAME)

$(NAME) :	$(OBJ) $(SRC)
		gcc -o $(NAME) $(OBJ) -g

clean	:
		rm -f $(OBJ)

fclean  :	clean
		rm -f $(NAME)

re	:	fclean all
