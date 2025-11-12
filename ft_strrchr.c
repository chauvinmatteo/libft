/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:53:35 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/12 11:02:59 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	int				i;
	unsigned char	tf;

	i = 0;
	tf = (unsigned char)to_find;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if ((unsigned char)str[i] == tf)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	*str;
	int		find;

	str = "Hello";
	find = 'l';
	printf("%s\n", ft_strrchr(str, find));
	return (0);
}*/
