/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:33:28 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/12 09:52:50 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char	tolower_adapter(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_tolower((int)c));
}

#include <stdio.h>

int	main(void)
{
	char *str = "DADADSDWQFASGA";
	char *res = ft_strmapi(str, tolower_adapter);
	if (res)
	{
		printf("Before function : %s\n", str);
		printf("After function : %s\n", res);
		free(res);
	}
	return (0);
}*/