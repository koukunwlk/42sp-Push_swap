/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:52:23 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/04 17:04:12 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include "../libft/libft.h"

# define TRUE 1
# define FALSE 0
# define INT_MAX 2147483647
# define INT_MIN -2147483648

/* Structs */

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

typedef struct s_data
{
	t_stack *a;
	t_stack *b;
	t_stack *tmp;
	int		max;
	int		big;
	int		size;
	int		group_size;
	int		group_count;
}	t_data;

t_stack	*init_stack(void);
int		validate_args(int argc, char *argv[]);
int		is_sorted(t_stack *stack);
int		ft_max(int x, int y);
int		ft_min(int x, int y);
int		ft_abs(int a);
void	populate_stack(int argc, char *argv[], t_stack *stack);
int		stack_size(t_stack *stack);
int		distance_to_top(t_stack *stack, int num);
t_stack *find_bigger(t_stack *stack);
t_stack *find_lower(t_stack *stack);
void	free_stack(t_stack *stack);
void	pa_op(t_stack **stack_a, t_stack **stack_b, int flag);
void	sa_op(t_stack **stack, int flag);
void	ra_op(t_stack **stack, int flag);
void	rra_op(t_stack **stack, int flag);
void	pb_op(t_stack **stack_a, t_stack **stack_b, int flag);
void	sb_op(t_stack **stack, int flag);
void	rb_op(t_stack **stack, int flag);
void	rrb_op(t_stack **stack, int flag);
void	ss_op(t_stack *stack);
void	rr_op(t_stack **stack_a, t_stack **stack_b);
void	rrr_op(t_stack **stack_a, t_stack **stack_b);
void	sort_3(t_data *data);
void	sort_5(t_data *data);
#endif
