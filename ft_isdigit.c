/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:42:09 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 12:58:48 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c = '5';
	printf("%d\n",ft_isdigit((unsigned char)c));
	printf("%d\n", isdigit(c));
}*/