/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:32:55 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/05 12:51:51 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int to_find)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return ((char*)&str[i]);
		i++;
	}
	if (to_find == '\0')
		return ((char*)&str[i]);
	return (0);
}

