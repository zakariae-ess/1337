/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:25:21 by zessalih          #+#    #+#             */
/*   Updated: 2026/10/20 20:47:09 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	min;
	size_t	s_len;

	i = 0;
	d_len = 0;
	s_len = 0;
	min = size;
	while (dest[d_len] != '\0')
		d_len++;
	if (d_len < min)
		min = d_len;
	while (src[s_len] != '\0')
		s_len++;
	while (d_len + i + 1 < size && src[i] != '\0')
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (s_len + min);
}
