/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:18:08 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/13 12:18:08 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*pointer_dest;
	unsigned char	*pointer_src;

	if (!dest && !src)
		return (0);
	pointer_dest = (unsigned char *) dest;
	pointer_src = (unsigned char *) src;
	while (len-- != 0)
	{
		*(pointer_dest++) = *(pointer_src++);
	}
	return (dest);
}
