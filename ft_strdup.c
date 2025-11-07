/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:02:40 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/07 11:10:29 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(const char *str)
{
	int i;
	char *dest;

	i = 0;
	
	dest = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);	
}
#include <stdio.h>

int main (void)
{
	char *str = "Bonjour";
	printf("%s\n", ft_strdup(str));
	return (0);
}