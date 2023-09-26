/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:08:43 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/17 16:12:44 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c);
int		ft_count_splits(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	**tmp;
	int		start;
	int		i;
	int		j;

	tmp = ft_calloc(ft_count_splits(s, c) + 1, sizeof(char *));
	if (!tmp || !s)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= (int) ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == (int) ft_strlen(s)) && start >= 0)
		{
			tmp[j++] = ft_substr(s, start, i - start);
			start = -1;
		}
		i++;
	}
	tmp[j] = 0;
	return (tmp);
}

int	ft_count_splits(const char *s, char c)
{
	int	next;
	int	count;

	next = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !next)
		{
			next = 1;
			count++;
		}
		if (*s == c)
			next = 0;
		s++;
	}
	return (count);
}
