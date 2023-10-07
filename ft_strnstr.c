/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:24:17 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/14 19:24:17 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *search, size_t len)
{
	int		i;
	char	*src_pointer;
	char	*search_pointer;

	if (!ft_strlen(search))
		return ((char *)src);
	if (!ft_strlen(src) || len < ft_strlen(search))
		return (0);
	i = len - ft_strlen(search) + 1;
	while (i-- && *src)
	{
		src_pointer = (char *)src;
		search_pointer = (char *)search;
		while (*search_pointer && *search_pointer == *src_pointer)
		{
			++src_pointer;
			++search_pointer;
		}
		if (!*search_pointer)
			return ((char *)src);
		++src;
	}
	return (0);
}
