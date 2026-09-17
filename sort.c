/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:03:45 by mhend             #+#    #+#             */
/*   Updated: 2026/01/08 19:21:14 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack **s, t_stack **ss)
{
	int	size;

	size = lstsize(*s);
	if (size == 2)
	{
		if ((*s)->value > (*s)->next->value)
			sa(s, false);
	}
	else if (size == 3)
		sort3(s);
	else if (size <= 5)
		sort5(s, ss);
	else
		sorting(s, ss);
}
