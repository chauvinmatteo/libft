/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:14:21 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/10 11:40:13 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (!s[0])
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len >= (unsigned int)ft_strlen((char *)s) - start)
		len = (unsigned int)ft_strlen((char *)s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*#include <stdio.h>

int	main(void)
{
	char *s = "Hello World";
	char *sub = ft_substr(s, 6, 5);
	printf("%s\n", sub);
	free(sub);
	return (0);
}*/