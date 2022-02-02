NAME		= push_swap
LIBFT		= ./libft/libft.a

CC			= clang
CFLAGS		= -g3 

RM			= rm -rf

INCLUDE 	= -I ./include/
PATH_OBJ	= ./objs/
PATH_SRC	= ./srcs/
PATH_FREE	= $(PATH_SRC)free_all/
PATH_INIT	= $(PATH_SRC)init_stack/
PATH_MAIN	= $(PATH_SRC)main_function/
PATH_MOVES	= $(PATH_SRC)moves/
PATH_SORT	= $(PATH_SRC)sort/
PATH_SWAP	= $(PATH_SRC)swap_area/
PATH_VALID	= $(PATH_SRC)validates/
PATH_UTILS	= $(PATH_SRC)utils/
PATH_WRITE	= $(PATH_SRC)write_stacks/

SRCS		= $(PATH_MAIN)push_swap.c\
			  


OBJS		= $(patsubst $(PATH_SRC)%.c, $(PATH_OBJ)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(INCLUDE) $(LIBFT) $(PATH_MAIN)main.c $(OBJS)  -o $(NAME)

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJ)
	@mkdir -p $(PATH_OBJ)free_all/
	@mkdir -p $(PATH_OBJ)init_stack/
	@mkdir -p $(PATH_OBJ)main_function/
	@mkdir -p $(PATH_OBJ)moves/
	@mkdir -p $(PATH_OBJ)sort/
	@mkdir -p $(PATH_OBJ)swap_area/
	@mkdir -p $(PATH_OBJ)validates/
	@mkdir -p $(PATH_OBJ)write_stacks/
	@mkdir -p $(PATH_OBJ)utils/
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(LIBFT):
	@make -c ./libft
clean: 
	@$(RM) $(PATH_OBJ)

fclean: clean
	@$(RM) $(NAME)