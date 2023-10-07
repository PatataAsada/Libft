/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:43:14 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/13 13:43:14 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, size_t c)
{
	const char	*position;

	position = s;
	while (*position != '\0')
	{
		if (*position == (char) c)
			return ((char *) position);
		position++;
	}
	if (*position == (char) c)
		return ((char *) position);
	return (NULL);
}
