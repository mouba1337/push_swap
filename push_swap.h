/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 20:52:09 by mhend             #+#    #+#             */
/*   Updated: 2026/01/08 19:32:14 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct sss
{
	int			value;
	int			index;
	struct sss	*next;
	struct sss	*prev;
}				t_stack;

int				syntax(char *s);
int				dupp(t_stack *a, int n);
int				freee(t_stack **a);
long			atooll(const char *avv);
void			append(t_stack **hh, int n);
t_stack			*last(t_stack *h);
void			check(t_stack **s, char **av);
void			pb(t_stack **a, t_stack **b, bool check);
void			pa(t_stack **a, t_stack **b, bool check);
void			ra(t_stack **a, bool check);
void			rb(t_stack **b, bool check);
void			rr(t_stack **a, t_stack **b, bool check);
char			**split(char *s);
int				lstsize(t_stack *a);
void			sa(t_stack **a, bool check);
void			sb(t_stack **b, bool check);
void			ss(t_stack **a, t_stack **b, bool check);
void			sort3(t_stack **s);
void			sort5(t_stack **a, t_stack **b);
void			sorting(t_stack **s, t_stack **sss);
void			rra(t_stack **a, bool check);
void			rrb(t_stack **b, bool check);
void			rrr(t_stack **a, t_stack **b, bool check);
void			indexing(t_stack *a);
void			sort(t_stack **s, t_stack **ss);
void			freeargs(char **args);

#endif
