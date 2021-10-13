NAME =	push_swap

NAME_BONUS = checker

SRC	=		error.c			\
			operations.c	\
			push_swap.c		\
			s.c				\
			sort.c			\
			stack.c			\
			array.c			\
			check.c			\
			additional.c

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

# /////////


# NAME = push_swap

# CH_NAME = checker

# PS_SRCS =	error.c			\
# 			operations.c	\
# 			push_swap.c		\
# 			s.c				\
# 			sort.c			\
# 			stack.c			\

# CC = gcc -Wall -Wextra -Werror

# INCLUDES = -I.

# PS_OBJS = $(PS_SRCS:.c=.o)

# CH_OBJS = $(CH_SRCS:.c=.o)

# $(NAME): $(PS_OBJS)
# 	$(MAKE) -C 
# 	$(CC) -o $(NAME) $(PS_OBJS) 

# $(CH_NAME): $(CH_OBJS)
# 	$(MAKE) -C 
# 	$(CC) -o $(CH_NAME) $(CH_OBJS)

# all : $(NAME)

# clean :
# 	$(MAKE) clean -C 
# 	rm -rf $(PS_OBJS)
# 	rm -rf $(CH_OBJS)

# fclean : clean
# 	$(MAKE) fclean -C 
# 	rm -rf $(NAME)
# 	rm -rf $(CH_NAME)

# bonus : $(CH_NAME)

# re : fclean all

# rebonus: fclean bonus