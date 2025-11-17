/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:32:55 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 09:33:05 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	to_find;

	i = 0;
	to_find = (unsigned char)c;
	while (str[i])
	{
		if ((unsigned char)str[i] == to_find)
			return ((char *)&str[i]);
		i++;
	}
	if (to_find == '\0')
		return ((char *)&str[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "test";
	int to_find = 't';
	
	printf("%s\n", ft_strchr(str, to_find));
	printf("%s\n", strchr(str, to_find));
	return (0);
}*/