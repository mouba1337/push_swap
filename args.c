/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 23:31:34 by mhend             #+#    #+#             */
/*   Updated: 2026/01/04 23:26:20 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long     atoll(const char *avv)
{
    long     resu;
    int     sign;
    
    resu = 0;
    sign = 1;
    while (*avv == ' ' || (*avv >= 9 && *avv <= 13))
        avv++;
    if (*avv == '-' || *avv == '+')
    {
        if (*avv == '-')
            sign = -sign;
        avv++;
    }
    while (*avv >= '0' && *avv <= '9')
    {
        resu = resu * 10 + (*avv - 48);
        avv++; 
    }
    return(resu * sign);
}

void check(t_stack **s, char **av)
{
    long n;
    
    while(*av)
    {
        if (syntax(*av))
            freee(s);
        n = atoll(*av);
        if (n < INT_MIN || n > INT_MAX)
            freee(s);
        if (dup(*s, (int)n))
            freee(s);
        append(s, (int)n);
        av++;
    }
}