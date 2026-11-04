/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 19:22:58 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/02 15:16:43 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	int		i;
	char	*p;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen(s);
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
