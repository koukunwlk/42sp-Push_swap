/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:52:23 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 14:28:19 by mamaro-d         ###   ########.fr       */
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
	int	data;
	int index;
	struct s_stack *next;
	struct s_stack *previous;
}	t_stack;


t_stack	*init_stack();
int 	validate_args(int argc, char *argv[]);
void	populate_stack(int argc, char *argv[], t_stack *stack);
void	free_stack(t_stack *stack);

#endif
