/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:33:53 by chauv             #+#    #+#             */
/*   Updated: 2025/11/05 11:22:32 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int a)
{
    if ((a >= 'a' && a <= 'z')
        || (a >= 'A' && a <= 'Z') 
        || (a >= '0' && a <= '9'))
        return (1);
    return (0);
}
int main(void)
{
    printf("%d\n", ft_isalnum('D'));
    printf("%d\n", ft_isalnum('d'));
    printf("%d\n", ft_isalnum('3'));
    printf("%d\n", ft_isalnum('.'));
}