/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:43:18 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 12:58:36 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c = '2';
	printf("%d\n",ft_isalnum((unsigned char)c));
	printf("%d\n", isalnum(c));
}*/