/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:28:11 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/13 12:28:11 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*tmp;
	char	*dest_pointer;

	tmp = (char *)src;
	dest_pointer = (char *)dest;
	if (tmp < dest_pointer)
	{
		while (len--)
			dest_pointer[len] = tmp[len];
	}
	else
		ft_memcpy(dest, tmp, len);
	return (dest);
}
