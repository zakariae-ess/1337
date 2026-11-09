/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 19:22:58 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/09 16:26:31 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
