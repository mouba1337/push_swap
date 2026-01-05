/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:52:35 by mhend             #+#    #+#             */
/*   Updated: 2026/01/05 01:17:16 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void     rev_rotate(t_stack **a)
{
    t_stack     *lastt;
    
    if (!a || !*a || !(*a)->next)
        return;
    lastt = last(*a);
    (*a)->prev = lastt;
    lastt->next = *a;
    lastt->prev->next = NULL;
    *a = lastt;
    (*a)->prev = NULL;  
}

void    rra(t_stack **a,  int print)
{
    rev_rotate(a);
    if (print)
        write(1, "rra\n", 4);
}

void    rrb(t_stack **b,  int print)
{
    rev_rotate(b);
    if (print)
        write(1, "rrb\n", 4);
}

void    rrr(t_stack **a, t_stack **b,  int print)
{
    rev_rotate(a);
    rev_rotate(b);
    if (print)
        write(1, "rrr\n", 4);
}