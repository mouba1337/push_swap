/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tinysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 23:46:01 by mhend             #+#    #+#             */
/*   Updated: 2026/01/06 00:28:00 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack  *highest(t_stack *s)
{
    long    high;
    t_stack     *hnode;

    if (!s)
        return (NULL);
    high = INT_MIN;
    hnode = NULL;
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

static t_stack  *smallx(t_stack *s)
{
    long    small;
    t_stack     *snode;

    if (!s)
        return (NULL);
    small = INT_MAX;
    snode = NULL;
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

void    sort3(t_stack **s)
{
    t_stack *high;
    
    high = highest(*s);
    if (*s== high)
        ra(s, false);
    else if ((*s)->next == high)
        rra(s, false);
    if ((*s)->value > (*s)->next->value)
        sa(s, false);       
}

void    sort5(t_stack **a, t_stack **b)
{
    t_stack     *smallest;
    
    while (lstsize > 3)
    {
        smallest = smallx(*a);
        while (*a != smallest)
        {
            if (((*a)->next == smallest))
                ra(a, false);
            else
                rra(a, false);
        }
    }
}