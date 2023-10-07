/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:35:23 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/13 15:35:23 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t len)
{
	unsigned char	*pointer_s1;
	unsigned char	*pointer_s2;

	pointer_s1 = (unsigned char *) s1;
	pointer_s2 = (unsigned char *) s2;
	while (len--)
	{
		if (*pointer_s1++ != *pointer_s2++)
			return (*--pointer_s1 - *--pointer_s2);
	}
	return (0);
}
