/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chauv <chauv@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:38:13 by chauv             #+#    #+#             */
/*   Updated: 2025/11/03 21:42:10 by chauv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int  ft_isascii(int a)
{
    if (a >= 0 && a <= 127)
        return (1);
    return (0);
}
int	main(void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('~'));
	printf("%d\n", ft_isascii(200));
}