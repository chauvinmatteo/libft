/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 09:05:49 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/07 11:01:24 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>

#ifndef SIZE_MAX
# define SIZE_MAX ((size_t)-1)
#endif

void *calloc(size_t nmemb, size_t size)
{
	size_t total;
	void *ptr;

	if (nmemb > SIZE_MAX / size)
    	return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	

	
	
}