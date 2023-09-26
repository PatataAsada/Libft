/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:14:03 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/16 21:09:20 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;

	pointer = malloc(ft_strlen(s1) + 1);
	if (!pointer)
		return (NULL);
	ft_strlcpy((char *) pointer, s1, ft_strlen(s1) + 1);
	return (pointer);
}
