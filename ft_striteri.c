/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:54:14 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 10:41:03 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
}
#include <stdio.h>

int	main(void)
{
	char str[] = "abcdef";
	ft_striteri(str, to_upper_even);
	printf("%s\n", str);
}*/