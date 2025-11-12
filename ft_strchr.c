/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:32:55 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/12 12:00:57 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	int				i;
	unsigned char	tf;

	i = 0;
	tf = (unsigned char)to_find;
	while (str[i])
	{
		if ((unsigned char)str[i] == tf)
			return ((char *)&str[i]);
		i++;
	}
	if (tf == '\0')
		return ((char *)&str[i]);
	return (0);
}
