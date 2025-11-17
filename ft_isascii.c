/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:45:35 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 12:58:43 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c = 'a';
	printf("%d\n",ft_isascii((unsigned char)c));
	printf("%d\n", isascii(c));
}*/