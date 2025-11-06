/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chauv <chauv@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:26:43 by chauv             #+#    #+#             */
/*   Updated: 2025/11/03 21:31:34 by chauv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isdigit(int a)
{
    if (a >= '0' && a <= '9')
        return (1);
    return (0);
}
int main(void)
{
    printf("%d\n", ft_isdigit('D'));
    printf("%d\n", ft_isdigit('d'));
    printf("%d\n", ft_isdigit('3'));
    printf("%d\n", ft_isdigit('.'));
}