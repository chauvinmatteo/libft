/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:59:47 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/12 11:55:15 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nextword(const char *s, int *i, int *start, char c)
{
	if (c == '\0')
	{
		if (*i == 0 && s[*i])
		{
			*start = 0;
			while (s[*i])
				(*i)++;
			return (1);
		}
		return (0);
	}
	while (s[*i] == c)
		(*i)++;
	if (!s[*i])
		return (0);
	*start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (1);
}

static int	ft_countword(const char *str, const char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str || !*str)
		return (0);
	if (c == '\0')
		return (1);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_worddup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_frall(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		end;
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!tab)
		return (NULL);
	j = 0;
	i = 0;
	while (ft_nextword(s, &i, &start, c))
	{
		end = i;
		tab[j] = ft_worddup(s, start, end);
		if (!tab[j])
			return (ft_frall(tab, j - 1), NULL);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str = "Jjqofanlfmafmqsamcamiqngdkfsafalmalsf";
	const char	sep = 'f';
	char		**tab;
	int			i;

	i = 0;
	tab = ft_split(str, sep);
	if (!tab)
		return (1);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
