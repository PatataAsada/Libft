/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:27:27 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/19 20:27:27 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
				char*))
{
	unsigned int	i;
	char			*iterator;

	iterator = s;
	i = 0;
	while (s[i] != 0)
	{
		f(i, iterator++);
		i++;
	}
}
