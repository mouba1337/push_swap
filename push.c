/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:44:19 by mhend             #+#    #+#             */
/*   Updated: 2026/01/06 00:13:11 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void     push(t_stack **a, t_stack **b)
{
    t_stack     *node;

    if(!*a)
        return;
    node = *a;
    *a = (*a)->next;
    if (*a)
        (*a)->prev = NULL;
    node->next = NULL;
    if (!*b)
    {
        *b = node;
        node->next = NULL; 
    }
    else
    {
        node->next = *b;
        (*b)->prev = node;
        *b = node;
    }        
}

void pa(t_stack **a, t_stack **b, bool check)
{
    push(b, a);
    if (!check)
        write (1, "pa\n", 3);
}

void pb(t_stack **a, t_stack **b, bool check)
{
    push(a, b);
    if (!check)
        write (1, "pb\n", 3);
}
