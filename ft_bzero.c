/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:56:32 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/13 11:56:32 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t len)
{
	unsigned char	*pointer_pointer;

	pointer_pointer = pointer;
	while (len-- != 0)
	{
		*(pointer_pointer++) = '\0';
	}
}
