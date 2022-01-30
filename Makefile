NAME		= push_swap

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

SRCS		=	$(PATH_MAIN)push_swap.c\
				$(PATH_SORT)sort_stack.c\
				$(PATH_SORT)simple_sort.c\
				$(PATH_INIT)init_stack.c\
				$(PATH_UTILS)ft_atoi.c\
				$(PATH_UTILS)ft_calloc.c\
				$(PATH_UTILS)ft_is_digit.c\
				$(PATH_VALID)is_diferent.c\
				$(PATH_VALID)is_number.c\
				$(PATH_VALID)is_range.c\
				$(PATH_VALID)verify.c\
				$(PATH_VALID)is_sorted.c\
				$(PATH_WRITE)atribute_stack.c\
				$(PATH_SWAP)sa_swap.c\
				$(PATH_SWAP)ra_swap.c\
				$(PATH_SWAP)rra_swap.c\
				$(PATH_SWAP)pa_swap.c\
				$(PATH_SWAP)pb_swap.c\
				$(PATH_FREE)destroy_stacks.c\
				$(PATH_UTILS)find_higher.c\
				$(PATH_UTILS)find_lower.c\
				$(PATH_MOVES)move_top_two.c\

OBJS		= $(patsubst $(PATH_SRC)%.c, $(PATH_OBJ)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(INCLUDE) $(PATH_MAIN)main.c $(OBJS) -o $(NAME)

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
clean: 
	@$(RM) $(PATH_OBJ)

fclean: clean
	@$(RM) $(NAME)