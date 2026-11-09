/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:27:17 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/09 16:23:18 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_size(int n)
{
	int	size;

	size = 1;
	if (n < 0)
		size++;
	while (n / 10 != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static void	fill_arr(char *str, long num, int index, int len)
{
	if (num == 0)
	{
		str[index] = '0';
		index++;
	}
	while (num > 0)
	{
		str[len - index - 1] = (num % 10) + '0';
		index++;
		num /= 10;
	}
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	long	num;
	int		size;
	int		index;
	char	*str;

	num = n;
	index = 0;
	size = str_size(n);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	fill_arr(str, num, index, size);
	return (str);
}
