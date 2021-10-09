NAME =	push_swap

SRC	=	error.c			\
		operations.c	\
		push_swap.c		\
		s.c				\
		sort.c			\
		stack.c			\
		array.c			\
		additional.c

OBJ = 	$(SRC:.c=.o)

CC =	gcc

RM =	rm -f

INCL =	push_swap.h

FLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

all :	$(NAME)

%.o :	%.c $(INCL) Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re

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