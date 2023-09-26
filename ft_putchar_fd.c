/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:45:51 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/20 10:45:51 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	*arg;

	arg = ft_calloc(1, sizeof(char));
	arg[0] = c;
	write(fd, arg, sizeof(char));
	free(arg);
	arg = NULL;
}
