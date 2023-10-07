/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:21:18 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/13 15:21:18 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *src, size_t search, size_t len)
{
	unsigned char	*pointer_src;

	pointer_src = src;
	while (len-- != 0)
	{
		if (*pointer_src++ == (unsigned char)search)
			return (--pointer_src);
	}
	return (NULL);
}
