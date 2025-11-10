/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:19:04 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/10 09:53:20 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("Hello", "l", 2));
	printf("%s\n", ft_strnstr("Hello", "l", 3));
	printf("%s\n", ft_strnstr("Hello", "", 2));
	printf("%s\n", ft_strnstr("Hello", "Hello", 5));
	printf("%s\n", ft_strnstr("Hello", "o", 5));
	return (0);
}*/