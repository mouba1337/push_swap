/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tinysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 23:46:01 by mhend             #+#    #+#             */
/*   Updated: 2026/01/08 19:11:04 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*highest(t_stack *s)
{
	long	high;
	t_stack	*hnode;

	if (!s)
		return (NULL);
	high = s->value;
	hnode = s;
	while (s)
	{
		if (s->value > high)
		{
			high = s->value;
			hnode = s;
		}
		s = s->next;
	}
	return (hnode);
}

static t_stack	*smallx(t_stack *s)
{
	long	small;
	t_stack	*snode;

	if (!s)
		return (NULL);
	small = s->value;
	snode = s;
	while (s)
	{
		if (s->value < small)
		{
			small = s->value;
			snode = s;
		}
		s = s->next;
	}
	return (snode);
}

void	sort3(t_stack **s)
{
	t_stack	*high;

	high = highest(*s);
	if (*s == high)
		ra(s, false);
	else if ((*s)->next == high)
		rra(s, false);
	if ((*s)->value > (*s)->next->value)
		sa(s, false);
}

void	sort5(t_stack **a, t_stack **b)
{
	t_stack	*smallest;

	while (lstsize(*a) > 3)
	{
		smallest = smallx(*a);
		if (((*a)->next == smallest))
			ra(a, false);
		else
		{
			while (*a != smallest)
				rra(a, false);
		}
		pb(a, b, false);
	}
	sort3(a);
	while (*b)
		pa(a, b, false);
}
