/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 20:52:09 by mhend             #+#    #+#             */
/*   Updated: 2026/01/06 00:13:34 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdbool.h>

typedef struct sss
{
    int     value;
    int     index;
    struct sss  *next;
    struct sss *prev;   
}   t_stack;

int     syntax(char *s);
int dup(t_stack *a, int n);
int     freee(t_stack **a);
long     atoll(const char *avv);
void    append(t_stack **hh, int n);
t_stack     *last(t_stack *h);
void check(t_stack **s, char **av);
void pb(t_stack **a, t_stack **b, bool check);
void pa(t_stack **a, t_stack **b, bool check);
void    ra(t_stack **a, bool check);
void    rb(t_stack **b, bool check);
void rr(t_stack **a, t_stack **b, bool check);
char    **split(char *s);
int     lstsize(t_stack *a);
void    sa(t_stack **a, bool check);
void    sb(t_stack **b, bool check);
void    ss(t_stack **a, t_stack **b, bool check);



#endif

