NAME =	push_swap

NAME_BONUS = checker

SRC	=		error.c			\
			operations.c	\
			operations_2.c	\
			operations_3.c	\
			push_swap.c		\
			big_sort.c				\
			small_sort.c			\
			stack.c			\
			array.c			\
			check.c

SRC_BONUS =	checker.c			\
			check.c				\
			error.c				\
			bonus.c				\
			stack.c				\
			operations_bonus.c


OBJ = 	$(SRC:.c=.o)

OBJ_BONUS = 	$(SRC_BONUS:.c=.o)

CC =	gcc

RM =	rm -f

INCL =	push_swap.h

INCL_BONUS =	push_swap_bonus.h

FLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

all :	$(NAME)

%.o :	%.c $(INCL) $(INCL_BONUS) Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(NAME_BONUS): $(OBJ_BONUS)
	@$(CC) $(FLAGS) $(OBJ_BONUS) -o $(NAME_BONUS)

bonus: $(NAME_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean:	clean
	$(RM) $(NAME) $(NAME_BONUS)

re:		fclean all

.PHONY:	all clean fclean re bonus
