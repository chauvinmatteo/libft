/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:05:25 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 09:20:45 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int a, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		if (s[i] == (unsigned char)a)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char *str = "Bonjour";
	int to_find = 'n';
	char *res = ft_memchr(str, to_find, 8);
	printf("%s\n", res);
	return (0);
}*/