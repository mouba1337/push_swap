/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhend <mhend@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:03:03 by mhend             #+#    #+#             */
/*   Updated: 2026/01/08 02:16:13 by mhend            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	separator(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

static int	wcount(char *s)
{
	int	bubble;
	int	count;

	count = 0;
	bubble = 0;
	while (*s)
	{
		if (!separator(*s) && bubble == 0)
		{
			count++;
			bubble = 1;
		}
		else if (separator(*s))
			bubble = 0;
		s++;
	}
	return (count);
}

static char	*wdup(char *start, int len)
{
	char	*dup;
	char	*s;

	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	s = dup;
	while (len > 0)
	{
		*s = *start;
		s++;
		start++;
		len--;
	}
	*s = '\0';
	return (dup);
}

char	**split(char *s)
{
	int		words;
	char	**splt;
	int		i;
	char	*start;

	words = wcount(s);
	splt = malloc(sizeof(char *) * (words + 1));
	if (!splt)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && separator(*s))
			s++;
		start = s;
		while (*s && !separator(*s))
			s++;
		splt[i] = wdup(start, s - start);
		if (!splt[i])
			return (NULL);
		i++;
	}
	splt[i] = NULL;
	return (splt);
}
