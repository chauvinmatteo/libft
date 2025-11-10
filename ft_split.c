/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:59:47 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/10 16:09:04 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_countword(const char *str, const char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && (i = 0 || str[i - 1] == c))
		{
			count++;
			i++;
		}
	}
	return (count);
}


char	**ft_split(char const *s, char c)
{
}
