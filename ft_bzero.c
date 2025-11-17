/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:44:19 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 09:15:16 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[10] = "TesttesT";
	char s2[10] = "TesttesT";
	ft_bzero(str, 2);
	bzero(s2, 2);
	printf("%s\n", str);
	printf("%s\n", s2);
}*/