/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:52:35 by mhend             #+#    #+#             */
/*   Updated: 2026/01/05 01:05:28 by mhend            ###   ########.fr       */
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
    lastt->prev = NULL;
    *a = lastt;
    (*a)->prev = NULL;  
}