/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:12:41 by mhend             #+#    #+#             */
/*   Updated: 2026/01/08 02:16:49 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **h)
{
	t_stack	*one;
	t_stack	*two;

	if (!*h || !(*h)->next)
		return ;
	one = *h;
	two = one->next;
	one->next = two->next;
	two->next = one;
	*h = two;
	two->prev = NULL;
	one->prev = two;
	if (one->next)
		one->next->prev = one;
}

void	sa(t_stack **a, bool check)
{
	swap(a);
	if (!check)
		write(1, "sa\n", 3);
}

void	sb(t_stack **b, bool check)
{
	swap(b);
	if (!check)
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b, bool check)
{
	swap(a);
	swap(b);
	if (!check)
		write(1, "ss\n", 3);
}
