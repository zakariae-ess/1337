/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:00:05 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/09 14:18:35 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	num_words(const char *s, char c)
{
	int	num;
	int	i;

	num = 0;
	i = 1;
	if (s[0] == '\0')
		return (0);
	if (s[0] != c)
		num++;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			num++;
		i++;
	}
	return (num);
}

static int	end_index(const char *s, int *start, char c)
{
	int	end;

	while (s[*start] == c && s[*start] != '\0')
		(*start)++;
	end = *start;
	while (s[end] != '\0' && s[end] != c)
		end++;
	return (end);
}

static char	*safe_alloc(char **arr, int index, int size)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
	{
		while (i < index)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
		return (NULL);
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n_str;
	int		start;
	int		end;
	char	**arr;

	i = 0;
	start = 0;
	if (s == NULL)
		return (NULL);
	n_str = num_words(s, c);
	arr = malloc((n_str + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (i < n_str)
	{
		end = end_index(s, &start, c);
		arr[i] = safe_alloc(arr, i, (end - start));
		if (arr[i] == NULL)
			return (NULL);
		ft_strlcpy(arr[i++], (s + start), (end - start + 1));
		start = end;
	}
	arr[i] = NULL;
	return (arr);
}
