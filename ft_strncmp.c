/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:14:03 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/05 13:33:52 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

 int ft_strncmp(const char *s1, const char *s2, size_t n)
 {
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
 }

 #include <stdio.h>
 
 int main(void)
 {
	char *s1 = "abdde";
	char *s2 = "abcdf";
	int i = ft_strncmp(s1, s2, 7);
	printf("%d\n", i);
	return (0);
 }