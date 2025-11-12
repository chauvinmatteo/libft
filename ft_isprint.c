/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:28:16 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/12 13:15:03 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
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