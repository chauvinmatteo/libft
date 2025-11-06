/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:20:06 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/05 12:31:19 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int 	ft_strlcat(char *dest, const char *src, unsigned int size)	
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
    	return size + src_len;
	else
	{
		while (src[i] && i < size - dest_len - 1)
		{
    		dest[dest_len + i] = src[i];
    		i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}
