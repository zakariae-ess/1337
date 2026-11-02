/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:15:14 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/01 11:28:09 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			total;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size > (size_t)-1 / nmemb)
		return (NULL);
	total = nmemb * size;
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
