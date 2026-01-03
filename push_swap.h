/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 20:52:09 by mhend             #+#    #+#             */
/*   Updated: 2026/01/03 22:00:23 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct sss
{
    int     value;
    int     index;
    struct sss  *next;
    struct sss *prev;   
}   t_stack;

#endif

