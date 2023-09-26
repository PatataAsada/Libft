/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:51:42 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/17 10:09:39 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocate_string(const char *s1, const char *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;

	tmp = ft_allocate_string(s1, s2);
	if (!tmp)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		tmp[i++] = s2[j++];
	}
	tmp[i] = '\0';
	return (tmp);
}

static char	*ft_allocate_string(const char *s1, const char *s2)
{
	char	*tmp;

	if (!s1)
		tmp = ft_calloc(ft_strlen(s2) + 1, sizeof(char));
	else if (!s2)
		tmp = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	else
		tmp = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	return (tmp);
}
