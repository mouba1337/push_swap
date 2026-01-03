/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 21:19:46 by mhend             #+#    #+#             */
/*   Updated: 2026/01/03 22:41:14 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int     syntax(char *s)
{
    if (!s)
        return (1);
    if (*s == '+' || *s == '-')
        s++;
    if (!*s)
        return (1);
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (1);
        s++;
    }
}

int dup(t_stack *a, int n)
{
    if (!a)
        return (0);
    while (a)
    {
        if (a->value == n)
            return (1);
        a = a->next;   
    }
    return (0);
}

int     freee(t_stack **a)
{
    t_stack     *tmp;
    t_stack     *current;

    if (a && *a)
    {
        current = *a;
        while (current)
        {
            tmp = current->next;
            free(current);
            current = tmp;
        }
        *a = NULL;
    }
    write(2, "Error\n", 6);
    exit(1);
}