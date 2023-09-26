/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:25:27 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/19 19:15:11 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*src_pointer;
	char		*dst_pointer;
	size_t		src_len;
	size_t		dst_len;
	size_t		n;

	src_pointer = src;
	dst_pointer = dst;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	n = size;
	while (*dst_pointer != '\0')
	{
		dst_pointer++;
		n--;
	}
	while (*src_pointer != '\0' && n-- > 1 && n < size)
		*dst_pointer++ = *src_pointer++;
	*dst_pointer = '\0';
	if (size < dst_len)
		return (src_len + size);
	else
		return (src_len + dst_len);
}
