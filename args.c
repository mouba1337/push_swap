/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 23:31:34 by mhend             #+#    #+#             */
/*   Updated: 2026/01/08 19:36:46 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	atooll(const char *avv)
{
	long	resu;
	int		sign;

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
	return (resu * sign);
}

void	check(t_stack **s, char **av)
{
	long	n;
	char	**tmp;

	tmp = av;
	while (*av)
	{
		if (syntax(*av))
		{
			freeargs(tmp);
			freee(s);
		}
		n = atooll(*av);
		if (n < INT_MIN || n > INT_MAX)
		{
			freeargs(tmp);
			freee(s);
		}
		if (dupp(*s, (int)n))
		{
			freeargs(tmp);
			freee(s);
		}
		append(s, (int)n);
		av++;
	}
}

void	indexing(t_stack *a)
{
	t_stack	*current;
	t_stack	*runner;
	int		sss;

	current = a;
	while (current)
	{
		sss = 0;
		runner = a;
		while (runner)
		{
			if (current->value > runner->value)
				sss++;
			runner = runner->next;
		}
		current->index = sss;
		current = current->next;
	}
}
