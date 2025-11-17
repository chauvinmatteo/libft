/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:28:16 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 12:58:55 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c = 'a';
	printf("%d\n",ft_isprint((unsigned char)c));
	printf("%d\n", isprint(c));
}*/