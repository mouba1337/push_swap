/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:34:44 by mhend             #+#    #+#             */
/*   Updated: 2026/01/08 19:13:30 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	maxpos(t_stack *b)
{
	int	max;
	int	p;
	int	i;

	i = 0;
	max = INT_MIN;
	while (b)
	{
		if (b->index > max)
		{
			max = b->index;
			p = i;
		}
		b = b->next;
		i++;
	}
	return (p);
}

static void	pushback(t_stack **a, t_stack **b)
{
	int	size;
	int	maxindex;

	while (*b)
	{
		size = lstsize(*b);
		maxindex = maxpos(*b);
		if (maxindex <= size / 2)
		{
			while (maxindex > 0)
			{
				rb(b, false);
				maxindex--;
			}
		}
		else
		{
			while (maxindex < size)
			{
				rrb(b, false);
				maxindex++;
			}
		}
		pa(a, b, false);
	}
}

void	sorting(t_stack **s, t_stack **sss)
{
	int (i), (size), r;
	i = 0;
	size = lstsize(*s);
	if (size <= 100)
		r = 15;
	else
		r = 35;
	while (*s)
	{
		if ((*s)->index <= i)
		{
			pb(s, sss, false);
			rb(sss, false);
			i++;
		}
		else if ((*s)->index <= i + r)
		{
			pb(s, sss, false);
			i++;
		}
		else
			ra(s, false);
	}
	pushback(s, sss);
}
