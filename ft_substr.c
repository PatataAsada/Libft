/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:43:58 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/17 00:43:38 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*tmp;
	int			i;

	i = 0;
	if (start > ft_strlen(s))
	{
		tmp = ft_calloc(1, sizeof(char));
		return (tmp);
	}
	else
	{
		if (len > ft_strlen(s))
			tmp = ft_calloc(ft_strlen(s) + 1, sizeof(char));
		else
			tmp = ft_calloc(len + 1, sizeof(char));
	}
	if (!tmp)
		return (NULL);
	while (len-- != 0 && s[start + i] != '\0')
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
