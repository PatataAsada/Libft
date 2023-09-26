/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:27:15 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/14 11:53:41 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	return (0);
}
