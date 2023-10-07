/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:49:18 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/13 11:49:18 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, size_t byte, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *) pointer;
	while (len--)
	{
		*p++ = (unsigned char) byte;
	}
	return (pointer);
}
