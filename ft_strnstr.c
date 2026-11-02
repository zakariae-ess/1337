/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 08:27:45 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/01 10:52:54 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_i;

	big_i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big_i < len && big[big_i] != '\0')
	{
		little_i = 0;
		while ((little[little_i] != '\0')
			&& (big_i + little_i < len)
			&& (big[big_i + little_i] == little[little_i]))
			little_i++;
		if (little[little_i] == '\0')
			return ((char *)(big + big_i));
		big_i++;
	}
	return (NULL);
}
