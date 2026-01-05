/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:32:12 by mhend             #+#    #+#             */
/*   Updated: 2026/01/05 00:50:32 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(t_stack **stack)
{
    t_stack     *lastt;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    lastt = last(*stack);
    lastt->next = *stack;
    (*stack)->prev = lastt;
    (*stack) = (*stack)->next;
    (*stack)->prev = NULL;
    lastt->next->next = NULL;
}

void    ra(t_stack **a, int print)
{
    rotate(a);
    if (print)
        write(1, "ra\n", 3);
}

void    rb(t_stack **b, int print)
{
    rotate(b);
    if (print)
        write(1, "rb\n", 3);
}

void rr(t_stack **a, t_stack **b, int print)
{
    rotate(a);
    rotate(b);
    if (print)
        write(1, "rr\n", 3);
}


