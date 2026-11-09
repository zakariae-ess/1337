/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:30:18 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/09 14:19:06 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	index;

	i = 0;
	index = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			index = i;
		i++;
	}
	if (c == '\0')
		index = i;
	if (index != -1)
		return ((char *)&s[index]);
	return (0);
}
