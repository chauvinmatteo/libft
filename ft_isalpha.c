/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chauv <chauv@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:52:55 by chauv             #+#    #+#             */
/*   Updated: 2025/11/03 18:01:45 by chauv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isalpha(int c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        return(1);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_isalpha('D'));
    printf("%d\n", ft_isalpha('d'));
    printf("%d\n", ft_isalpha(3));
    printf("%d\n", ft_isalpha('.'));
}