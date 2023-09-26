/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:10:54 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/17 13:00:30 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set);
int		ft_strart(const char *s1, const char *set);
int		ft_end(const char *s1, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tmp;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = ft_strart(s1, set);
	end = ft_end(s1, set);
	tmp = ft_substr(s1, start,
			ft_strlen(s1) - start - end);
	return (tmp);
}

int	ft_strart(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (i < (int) ft_strlen(s1))
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_end(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (i > 0)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		j++;
		i--;
	}
	return (j);
}
