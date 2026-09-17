/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:23:49 by mhend             #+#    #+#             */
/*   Updated: 2026/01/08 19:31:58 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack *s)
{
	while (s && s->next)
	{
		if (s->value > s->next->value)
			return (0);
		s = s->next;
	}
	return (1);
}

static void	fre(t_stack **s)
{
	t_stack	*runner;
	t_stack	*current;

	if (!s || !*s)
		return ;
	current = *s;
	while (current)
	{
		runner = current->next;
		free(current);
		current = runner;
	}
	*s = NULL;
}

void	freeargs(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return ;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

static void	parseargs(int ac, char **av, t_stack **a)
{
	char	**args;
	int		i;

	i = 1;
	while (i < ac)
	{
		args = split(av[i]);
		if (!args || !*args)
		{
			freeargs(args);
			freee(a);
		}
		check(a, args);
		freeargs(args);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	parseargs(ac, av, &a);
	if (!a || sorted(a))
	{
		fre(&a);
		return (0);
	}
	indexing(a);
	sort(&a, &b);
	fre(&a);
	fre(&b);
	return (0);
}
