/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:56:36 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 09:19:08 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long int i)
{
	int	len;

	len = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		i = -i;
		len++;
	}
	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*s;
	long int	nb;
	int			i;

	s = malloc(sizeof(char) * ft_nbrlen(n) + 1);
	if (!s)
		return (NULL);
	s[ft_nbrlen(n)] = '\0';
	if (n < 0)
		nb = -(long int)n;
	else
		nb = n;
	i = ft_nbrlen(n) - 1;
	if (n == 0)
		s[0] = '0';
	while (nb > 0)
	{
		s[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(144));
	printf("%s\n", ft_itoa(-144));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}*/
