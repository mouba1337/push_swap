/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 22:59:16 by mhend             #+#    #+#             */
/*   Updated: 2026/01/03 23:24:52 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack     *last(t_stack *h)
{
    if (!h)
        return (NULL);
    while (h->next)
        h = h->next;
    return (h);
}

void    append(t_stack **hh, int n)
{
    t_stack *node;
    t_stack *lastnode;
    if (!hh)
        return;
    node = malloc(sizeof(t_stack));
    if (!node)
        return;
    node->next = NULL;
    node->value = n;
    if (*hh = NULL)
    {
        *hh = node;
        node->prev = NULL;
    }
    else 
    {
        lastnode = last(*hh);
        lastnode->next = node;
        node->prev = lastnode;
    }
}