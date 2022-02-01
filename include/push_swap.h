/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:52:23 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/01 12:31:39 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

# define TRUE 1
# define FALSE 0
# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack
{
	int	*numbers;
	int	size;
	int	capacity;
	int	**range;
	int	top;
	int	high;
	int	low;
	int	high_pos;
	int	low_pos;
	int	best_num;
}	t_stack;

/* Verify functions */
int		validate_args(int argc, char **argv);
int		is_number(int argc, char **argv);
int		ft_is_digit(char c);
long	ft_atoi(const char *str);
int		is_different(int argc, char **argv);
int		is_range(int argc, char **argv);
void	*ft_calloc(size_t nbytes, size_t sizemem);
int		*atribute_stack(t_stack *stack, char **argv);
t_stack	*init_stack_a(t_stack *stack, int argc, char **argv);
t_stack	*init_stack_b(t_stack *stack_b, int argc);
void	sorting(t_stack *stack_a, t_stack *stack_b);
int		is_sorted(t_stack *stack_a);
void	sa_op(t_stack *stack);
void	pa_op(t_stack *stack_dst, t_stack *stack_src);
void	ra_op(t_stack *stack);
void	rra_op(t_stack *stack);
void	pb_op(t_stack *stack_dst, t_stack *stack_src);
void	rb_op(t_stack *stack);
void	rrb_op(t_stack *stack);
void	push_swap(t_stack *stack_a, t_stack *stack_b);
void	destroy_stacks(t_stack *stack_a, t_stack *stack_b);
int		find_higher(t_stack *stack);
int		find_lower(t_stack *stack);
int		find_next_low(t_stack *stack, int max);
void	move_top_two(t_stack *stack_a);
void	simple_sort(t_stack *stack_a, t_stack *stack_b);
void	complex_sort(t_stack *stack_a, t_stack *stack_b);
int		*booble_sort(int *stack, int size);
int		set_range(t_stack *stack_a, int size_range);
int		*create_sorted(int *ordered, t_stack *stack_a);
int		*create_range(int *ordered, int	*range, int size, t_stack *stack_a);
int		get_position(t_stack *stack, int value);
int		moves_count(t_stack *stack, int value);

#endif
